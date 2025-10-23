#include <iostream>
#include <string>
using namespace std;

vector<int> positions_brute(string haystack, string needle) {
  vector<int> p;

  int n = haystack.size();
  int m = needle.size();

  int i = 0, j = 0;

  while (i < n && j < m) {
    if (haystack[i] == needle[j]) {
      i++;
      j++;
      if (j >= m) {
        p.push_back(i - j);
        j = 0;
      }
    } else {
      i = i - j + 1;
      j = 0;
    }
  }

  return p;
}

vector<int> positions_kmp(string haystack, string needle) {
  int n = haystack.size();
  vector<int> p;

  // prepare the lps table
  int m = needle.size();
  vector<int> lps(m, 0);

  int i = 1, len = 0;
  while (i < m) {
    if (needle[i] == needle[len]) {
      lps[i++] = ++len;
    } else {
      if (len > 0) len--;
      if (len == 0) lps[i++] = 0;
    }
  }

  // check for the comparision
  i = 0;
  int j = 0;
  while (i < n) {
    if (haystack[i] == needle[j]) {
      i++;
      j++;
    } else {
      if (j != 0) {
        j = lps[j - 1];
      } else {
        i++;
      }
    }

    if (j == m) {
      p.push_back(i - m);
      j = lps[j - 1];
    }
  }

  return p;
}

int rabin_karp_hash(string s, int start, int end) {
  int n = end - start;

  int hash = 0;
  for (int i = 0; i < n; i++) {
    hash += s[start + i];  // just sum the values
  }

  return hash;
}

int rolling_hash_next(string s, int hash, int prev_start, int prev_end) {
  return hash - s[prev_start] + s[prev_end];
}

vector<int> positions_rabin_karp(string haystack, string needle) {
  // define a hash function

  // calculate the hash of the needle using that hash function
  int needle_size = needle.size();
  int hash_needle = rabin_karp_hash(needle, 0, needle_size);

  // now sliding-window over the haystack (window size = len(needle))
  // calculate hash, if hash matches -> compare the actual strings else move ahead
  int n = haystack.size();
  int range = n - needle_size;
  int hash = rabin_karp_hash(haystack, 0, needle_size);

  vector<int> res;
  for (int i = 0; i < range; i++) {
    if (hash == hash_needle) {
      // actually check the elements

      bool matched = true;
      for (int j = 0; j < needle_size; j++) {
        if (needle[j] != haystack[i + j]) {
          matched = false;
          break;
        }
      }

      if (matched) res.push_back(i);
    }

    hash = rolling_hash_next(haystack, hash, i, i + needle_size);
  }

  return res;
}

int main() {
  string haystack = "acaccacc";
  string needle = "aa";

  vector<int> poss = positions_rabin_karp(haystack, needle);
  int n = poss.size();

  cout << "[ ";
  for (int i = 0; i < n; i++) cout << poss[i] << " ";
  cout << "]" << endl;
}
