#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

typedef vector<int> vi;

int maxSub(vi& v, int l, int r)
{
    int ans = -1000000;
    for (int i = l;i<=r;i++) ans = fmax(v[i], ans);
    return ans;
}

int main()
{
    int t;cin >> t;
    while(t--)
    {
        int n; cin >> n;
        vi v(n);
        for (int &i : v) cin >> i;
        for (int i = 0; i < n;i++)
        {
            for (int j = 0; i+j<n;j++) 
            {
                cout << maxSub(v, i, i+j) << ' ';
            }
        }
        cout << endl;    
    }
} 
