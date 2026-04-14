#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    getline(cin, s);
    
    if (s.find("+") != string::npos) {
        int a=stoi(s.substr(0, s.find("+")));
        int b=stoi(s.substr(s.find("+")+1, s.size()-1));
        cout << a+b << endl;
        return 0;
    }

    if (s.find("-") != string::npos) {
        int a=stoi(s.substr(0, s.find("-")));
        int b=stoi(s.substr(s.find("-")+1, s.size()-1));
        cout << a-b << endl;
        return 0;
    }

    if (s.find("*") != string::npos) {
        int a=stoi(s.substr(0, s.find("*")));
        int b=stoi(s.substr(s.find("*")+1, s.size()-1));
        cout << a*b << endl;
        return 0;
    }

    if (s.find("/") != string::npos) {
        int a=stoi(s.substr(0, s.find("/")));
        int b=stoi(s.substr(s.find("/")+1, s.size()-1));
        cout << a/b << endl;
        return 0;
    }


}
