#include <bits/stdc++.h>

using namespace std;

int dp(int* a, int i) {
    if (i < 0) return 0;
    if (i == 0) {
        return max(a[0], 0);
    }
    return max(a[i] + dp(a, i-2), dp(a, i-1));
}

int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int a[n];
        for (int i =0;i<n;i++) {
            cin >> a[i];
        }
        cout << dp(a, n-1) << endl;
    }
}
