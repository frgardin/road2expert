#include <iostream>
#include <string>

using namespace std;

int main() {
    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);
    if (!s1.substr(s1.find(" "), s1.size()).compare(s2.substr(s2.find(" "), s2.size()))) {
        cout << "ARE Brothers" << endl;
    } else {
        cout << "NOT" << endl;
    }
}
