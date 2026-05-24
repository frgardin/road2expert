#include <iostream>
#include <string>

using namespace std;

int main() {
    string n;
    getline(cin, n);
    string s;
    getline(cin, s);
    int acc = 0;
    for (auto c : s) {
        acc += c-'0';
    }
    cout << acc << endl; 
}
