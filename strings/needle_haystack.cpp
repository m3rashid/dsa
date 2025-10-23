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

int main() {
  string haystack = "aaaaaaac";
  string needle = "aa";

  vector<int> poss = positions_kmp(haystack, needle);
  int n = poss.size();

  cout << "[ ";
  for (int i = 0; i < n; i++) cout << poss[i] << " ";
  cout << "]" << endl;
}
