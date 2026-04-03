#include <iostream>

using namespace std;

typedef long long ll;

ll smallestPair(int a[], int& n) {
    ll sum = a[0] + a[1] + 1 - 0;
    for (int i = 1;i<n-1;i++) {
        for (int j = i+1;j<n;j++) {
            ll p = a[i]+a[j]+j-i;
            if (p < sum) {
                sum=p;
            }
        }
    }

    return sum;
}


int main() {
    int t; cin >> t;
    while (t--) {
    int n; cin >> n;
    int a[n];
    for (int& i : a) cin >> i;
    cout << smallestPair(a, n) << endl; }
}
