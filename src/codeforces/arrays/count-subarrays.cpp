#include <iostream>
#include <vector>

using namespace std;

typedef vector<int> vi;

bool isValidSub(vi &v, int &l, int &r)
{
    for (int i = l+1;i<=r;i++)
    {
        if (v[i] < v[i-1])
        {
            return false;
        }
    }
    return true;
}

int generateSubArrays(vi &v, int &n)
{
    int counter=0;
    for (int i = 0; i<n;i++)
    {
        for (int j = i;j<n;j++)
        {
            counter += isValidSub(v, i, j) ? 1:0;
        }
    }
    return counter;
}


int main()
{
    int t;cin >> t;
    while (t--)
    {
        int n;cin >> n;
        vi v(n);
        for (int &i : v) cin >> i;
        cout << generateSubArrays(v, n) << endl;
    }
}
