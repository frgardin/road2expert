#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

typedef vector<int> vi;
typedef vector<vector<int>> vii;

int main() 
{
    int n; cin >> n;
    vii m(n, vi(n));
    for (vi &i : m) 
    {
        for (int &j : i) 
        {
            cin >> j;
        }
    }

    int sum1 = 0;
    int sum2 = 0;
    for (int i  =0; i<n;i++) 
    {
        sum1+=m[i][i];  
        sum2+=m[i][n-i-1];
    }

    cout << abs(sum1-sum2) << endl;
}
