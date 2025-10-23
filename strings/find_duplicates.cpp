#include <bits/stdc++.h>
using namespace std;

map<char, int> find_duplicates(string str) {
  map<char, int> m;
  int H = 0, x = 0;

  for (auto s : str) {
    x = 1;
    x = x << (s - 97);
    if ((x & H) > 0) {
      auto it = m.find(s);
      if (it == m.end()) {
        m.insert(pair<char, int>(s, 1));
      } else {
        it->second += 1;
      }
    } else {
      H = x | H;
    }
  }

  return m;
}

int main() {
  string str = "Helloworld";
  map<char, int> mp = find_duplicates(str);
  cout << "Original String: " << str << endl;

  for (auto x : mp) {
    cout << x.first << " : " << x.second << endl;
  }

  return 0;
}
