#include <bits/stdc++.h>

using namespace std;

int dp(int* a, int i) {
    if (i < 0) return 0;
    if (i == 0) {
        return max(a[0], 0);
    }
    return max(a[i] + dp(a, i-2), dp(a, i-1));
}

int dp(int* a, int i, int n, int* mem) {
    if (i < n) {
        mem[i] = max(a[i] + mem[i-2], mem[i-1]);
        return dp(a, i+1, n, mem);
    }
    return mem[n-1];
}

int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int a[n];
        int mem[n];
        for (int i =0;i<n;i++) {
            cin >> a[i];
            mem[i] = 0;
        }
        
        mem[0] = max(a[0], 0);
        mem[1] = max(a[1], mem[0]);

        // cout << "slow dp: " << dp(a, n-1) << endl;
        cout << dp(a, 2, n, mem) << endl;
    }
}
