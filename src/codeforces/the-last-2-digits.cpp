#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
    ll a, b, c, d; cin >> a >> b >> c >> d;

    ll am = a % 1000;
    ll bm = b % 1000;
    ll cm = c % 1000;
    ll dm = d % 1000;
    ll m = 100;    
    
    string ans = to_string((am*bm*cm*dm));

    if (ans.size() > 1) {
        cout << ans.at(ans.size()-2) << ans.at(ans.size()-1) << endl;
    } else if (a == 0 || b == 0 || c == 0){
        cout << ans.at(ans.size()-1) << endl;
    } else {
        cout << 0 << ans.at(ans.size()-1) << endl;
    }
}
