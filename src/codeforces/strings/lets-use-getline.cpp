#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main() {
    string s;
    getline(cin,s);

    s = s.substr(0, s.find("\\"));
    
    cout << s << endl; 
        
}
