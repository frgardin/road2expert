#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    getline(cin, s);
    cout << ((((s.at(0)-'0') % 2) == 0) ? "EVEN" : "ODD") << endl;
}
