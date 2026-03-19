#include <iostream>

using namespace std;

int main() {
    char c; cin >> c;
    if (c - 'A' <= 26) {
        char ans = c+32;
        cout << ans << endl;
        return 0;
    }
    char ans = c-32;
    cout << ans << endl;
}
