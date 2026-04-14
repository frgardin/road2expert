#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    getline(cin, s);
    int v = stoi(s.substr(0, 1));
    cout << (v % 2 ? "ODD\n" : "EVEN\n");
}
