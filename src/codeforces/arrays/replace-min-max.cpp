#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

typedef vector<int> vi;


int minVector(vi &v)
{
    int minValue = 1000000;
    int ans=-1;
    for (int i = 0;i<v.size();i++) 
    { 
        if (minValue > v[i]) 
        {
            minValue = v[i];
            ans=i;
        }
    }
    return ans;
}


int maxVector(vi &v)
{
    int maxValue = -1000000;
    int ans=-1;
    for (int i = 0;i<v.size();i++) 
    { 
        if (maxValue < v[i]) 
        {
            maxValue = v[i];
            ans=i;
        }
    }
    return ans;
}

void swap(vi &v, int i, int j)
{
    int aux = v[i];
    v[i] = v[j];
    v[j] = aux;
}

int main()
{
    int n; cin >> n;
    vi v(n);
    for (int &i : v) cin >> i;
    swap(v, minVector(v), maxVector(v));
    for (int i : v) cout << i << ' ' ;
    cout << endl; 
}
