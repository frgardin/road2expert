#include <bits/stdc++.h>

using namespace std;

int main() {
  long n;
  cin >> n;
  long a[n];
  long i = 0;
  while (i < n) {
    cin >> a[i];
    i++;
  }
  long long ans = 0;
  for (int j = 1; j < n; j++) {
    if (a[j - 1] > a[j]) {
      ans += a[j - 1] - a[j];
      a[j] = a[j - 1];
    }
  }
  cout << ans << endl;
}
