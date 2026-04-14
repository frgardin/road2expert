#include <iostream>
#include <string>

using namespace std;

int main() {
    int n; cin >> n;
    cin.ignore();
    string s;
    getline(cin, s);
    long long ans = 0;
    for (char c : s) {
        ans += c-'0';
    }
    cout << ans << endl;
}
