#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t; cin >> t;
    
    while (t--) {
        
        int n; cin >> n;
        int ans = 0;
        while (n--) {
            int v; cin >> v;
            ans = max(ans, v);
        }
        cout << ans << "\n";
    }
}

