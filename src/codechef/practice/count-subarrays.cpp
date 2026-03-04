#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
	// your code goes here
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        vector<int> v(n);
        for (int& i : v) {
            cin >> i;
        }
        
        vector<pair<ll, ll>>dp(n);
        dp[n-1] = make_pair(1, 0);
        for (int i=n-2; i>=0;i--) {
            if (v[i+1] >= v[i]) {
                dp[i] = make_pair(2+dp[i+1].first+dp[i+1].second, dp[i+1].second+1);
            } else {
                dp[i] = make_pair(1 + dp[i+1].first, 0);
            }
        }
        cout << dp[0].first << endl;
    }
}

