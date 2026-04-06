#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

typedef long long ll;

ll smallestPair(vector<int> v, int n)
{
    ll sum = v[0] + v[1] + 1;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            sum = fmin(v[i]+v[j]+j-i, sum);
        }
    }
    return sum;
}

int main()
{
    int t; cin >> t;
    while (t--) 
    {
        int n; cin >> n;
        vector<int>v(n);
        for (auto &i:v) cin >> i;
        cout << smallestPair(v, n) << endl;
    }
}