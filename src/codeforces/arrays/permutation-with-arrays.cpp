#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

typedef vector<int> vi;

int main()
{
    int n; cin >> n;
    vi v1(n);
    vi v2(n);
    for (int &i : v1) cin >> i;
    for (int &i : v2) cin >> i;
    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());

    for (int i = 0; i < n; i++)
    {
        if (v1[i] != v2[i])
        {
            cout << "no" << endl;
            return 1;
        }
    }

    cout << "yes" << endl;
    return 0;
}
