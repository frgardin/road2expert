#include<iostream>
#include<string>

using namespace std;

int main() {
    string s; cin >> s;
    
    string intValue = "";
    string floatValue = ""; 
    int isInt = 1;    
    
    for (int i = 0; i < s.size();i++) {
        if (s.at(i) == '.') {
           floatValue = "0.";
           i++;
           for (; i < s.size(); i++) {
                if (s.at(i) != '0') {
                    isInt = 0;
                }
                floatValue += s.at(i);  
           } 
        }

        intValue += s.at(i);
    }

    if (isInt) {
        cout << "int " << intValue << endl;
    } else {
        cout << "float " << intValue << " " << floatValue << endl; 
    }
    
    
}
