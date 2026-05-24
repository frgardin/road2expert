#include<iostream>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    while (n--) {
        int a[m];
        for (int i = 0; i < m; i++) cin >> a[i];
        for (int i = 0; i < m/2;i++) {
            int tmp = a[i];
            a[i] = a[m-i-1];
            a[m-i-1] = tmp;
        }
        for (int i  = 0; i < m;i++) {
            cout << a[i] << " "; 
        }
        cout << endl;
    }
}
