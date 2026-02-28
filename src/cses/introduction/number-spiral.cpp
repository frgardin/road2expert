#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
    int t; cin >> t;
    while (t--) {
        ll x, y; cin >> x >> y;
        ll maior = max(x-1, y-1);
        ll d =1 + maior * (maior+1);
        
        if (maior == (x-1) && x % 2 == 0) {
            cout << d + x-y << endl;
            continue;
        }
        if (maior == (x-1)) {
            cout << d - (x-y) << endl;
            continue;
        }
        if (maior == (y-1) && y % 2 == 0) {
            cout << d - (y-x) << endl;
            continue;
        }
        cout << d + (y-x) << endl;
    }
    return 0;
}
