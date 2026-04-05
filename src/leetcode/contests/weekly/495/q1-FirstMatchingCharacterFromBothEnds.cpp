#include <string>
#include <iostream>

using namespace std;

class Solution {
public:
    int firstMatchingIndex(string s) {
        for (int i = 0; i<=s.length()/2;i++) {
            if (s.at(i) == s.at(s.length()-i-1)) {
                return i;
            }
        }
        return -1;
    }
};

int main() {
    Solution s;
    cout << s.firstMatchingIndex("aaa") << endl;
}