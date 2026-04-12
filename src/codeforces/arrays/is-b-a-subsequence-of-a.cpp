#include <iostream>
#include <vector>

using namespace std;

int main() 
{
    int n, m; cin >> n >> m;
    vector<int> vn(n);
    vector<int> vm(m);
    for (int &i : vn) cin >> i;
    for (int &i : vm) cin >> i;

    int i = 0, j = 0;
    while (i < n && j < m) 
    {
        if (vn[i] == vm[j])
        {
            i++;
            j++;
        } else
        {
            i++;
        }   
    }

    if (j != m) cout << "NO\n";
    else        cout << "YES\n";
} 
