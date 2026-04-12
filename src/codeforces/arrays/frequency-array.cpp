#include<iostream>
#include<vector>
#include<map>

using namespace std;

typedef vector<int> vi;
typedef map<int, int, greater<int>> mii;

mii getFreqMap(vi &v)
{
    mii myMap;
    for (int i : v)
    {
       myMap[i]++;
    }
    return myMap;
}

int main()
{
    int n, m; cin >> n >> m;
    vi v(n);
    for (int &i : v) cin >> i;
    mii myMap= getFreqMap(v);
    for (int i = 1;i<=m;i++) 
    {
        cout << (myMap.count(i) > 0 ? myMap[i] : 0) << endl;
    }
}
