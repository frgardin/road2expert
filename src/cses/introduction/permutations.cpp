#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; cin >> n;
    if (n == 2 || n == 3) {
        cout << "NO SOLUTION" << endl;
        return 0;
    }
    for (int i = n-1; i>0;i=i-2) {
        cout << i << ' '; 
    } 
    cout << n << ' ';
    for (int i = n-2;i>0;i=i-2) {
        cout << i << ' ';
    }
    cout << endl; 
    return 0;
}
