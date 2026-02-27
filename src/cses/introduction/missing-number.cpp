#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;
  priority_queue<int> pq;
  int callback = n;
  while (--n) {
    int v;
    cin >> v;
    pq.push(v);
  }
  int last = pq.top();
  pq.pop();
  if (last == callback)
    callback = 1;
  while (!pq.empty()) {
    int cur = pq.top();
    pq.pop();
    if ((last - cur) > 1) {
      cout << cur + 1 << endl;
      return 0;
    }
    last = cur;
  }
  cout << callback << endl;
  return 0;
}
