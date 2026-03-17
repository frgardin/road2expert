#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; cin >> n;
    int y = 0;
    while (n >= 365) {
        y++;
        n-=365;
    }
    int m = 0;
    while (n>=30) {
        m++;
        n-=30;
    }
    int d = n;
    cout << y << " years" << endl;
    cout << m << " months" << endl;
    cout << d << " days" << endl; 
}
