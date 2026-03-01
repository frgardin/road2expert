#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
	// your code goes here
    ll n; cin >> n;
    int c =0;
    while (n>0) {
        c += n&1; // if is even count last bit
        n>>=1; // divide by 2
    }
    cout << c << endl;
}

