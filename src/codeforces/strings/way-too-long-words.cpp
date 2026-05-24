#include<iostream>
#include<string>

using namespace std;

int main() {
    int t; cin >> t;
    cin.ignore();
    while (t--) {
        string s;
        getline(cin, s);
        if (s.size() > 10) {
            cout << s.at(0) << s.size()-2 << s.at(s.size()-1) << endl;
            continue;
        }
        cout << s << endl;
    }
}
