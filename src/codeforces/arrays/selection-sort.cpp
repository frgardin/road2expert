#include <iostream>

using namespace std;

void swap(int a[], int& i, int& j) {
    int aux = a[i];
    a[i] = a[j];
    a[j] = aux;
}

void sort(int a[], int& n) {
    for (int i =0; i<n;i++) {
        int minIdx = i;
        int min = a[i];
        for (int j = i;j<n;j++) {
            if (min > a[j]) {
                min = a[j];
                minIdx = j;
            }
        }
        swap(a, i, minIdx);
    } 
}

int main() {
    int n; cin >> n;
    int a[n];
    
    for (int& i : a) cin >> i;
    
    sort(a, n);
    
    for (int i : a) cout << i << ' ';
    cout << endl;
}
