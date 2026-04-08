#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cout << "Pass list size: ";
    cin >> n;

    cout << endl;
    cout << '{';

    for (int i = 0;i<n;i++)
    {
        cout << i;
        if (i != n-1)
        {
            cout << ", ";
        }
        else
        {
            cout << '}' << endl;
        }
    }
}
