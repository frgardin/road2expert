#include <bits/stdc++.h>

using namespace std;

int main() {
    char c; cin >> c;
    if (c - '0' <= 9) {
        cout  << "IS DIGIT" << endl;
        return 0; 
    }
    if (c - 'A' <= 25) {
        cout << "ALPHA" << endl;
        cout << "IS CAPITAL" << endl;
        return 0;
    }
    if (c - 'a' <= 25) {
        cout << "ALPHA" << endl;
        cout << "IS SMALL" << endl;
        return 0;
    }
}
