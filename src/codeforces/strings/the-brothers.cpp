#include <iostream>
#include <string>

using namespace std;

int main() {
    string s1;
    string s2;
    getline(cin, s1);
    getline(cin, s2);
    cout << ((s1.substr(s1.find(" "), s1.size()-1) == s2.substr(s2.find(" "), s2.size()-1)) ? "ARE Brothers\n" : "NOT");
}
