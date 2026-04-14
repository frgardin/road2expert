#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s1;
    string s2;
    getline(cin, s1);
    getline(cin, s2);
    cout << s1.size() << ' ' << s2.size() << endl << s1 << ' ' << s2 << endl;
}

