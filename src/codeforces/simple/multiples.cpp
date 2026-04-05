#include <iostream>

using namespace std;

int main() {
    int a, b; cin >> a >> b;
    if ((a >= b && a % b == 0) || (b % a == 0)) {
        cout << "Multiples" << endl;
        return 0;
    }
    cout << "No Multiples" << endl;
}
