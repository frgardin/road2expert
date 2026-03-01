#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> v;
        //TODO: https://leetcode.com/problems/generate-parentheses/description/
    }
};

int main()
{   
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin >> n;
        Solution ob;
        for (const auto s : ob.generateParenthesis(n)) {
            cout << s << ' '; 
        }
        cout << endl;        
    }
	return 0;
}
