#include <iostream>
#include <vector>


using namespace std;

typedef vector<vector<int>> vii;

int main()
{
    int n, m; cin >> n >> m;
    vii matrix(n, vector<int>(m));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j<m;j++)
        {
            cin >> matrix[i][j];
        }
    }
    int f; cin >> f;
    for (int i = 0; i < n; i++) 
    {
        for (int j= 0 ;j<m;j++)
        {
            if (f == matrix[i][j]) 
            {
                cout << "will not take number\n";
                return 0;
            }
        }
    }
    cout << "will take number\n";
}
