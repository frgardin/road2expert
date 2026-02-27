#include <bits/stdc++.h>

using namespace std;

int main() {
  string s;
  cin >> s;
  int ans = 1;
  int l = 0;
  int r = 0;
  int cur = 0;
  while (r < s.size()) {
    if (s[l] == s[r]) {
      r++;
    } else {
      l = r;
    }
    cur = r - l;
    ans = max(cur, ans);
  }

  cout << max(cur, ans) << endl;
}
