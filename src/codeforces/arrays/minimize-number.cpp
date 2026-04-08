#include <iostream>
#include <unordered_set>
#include <algorithm>
#include <vector>

using namespace std;

typedef vector<int> vi;

vi divisors = {1, 2, 4, 8, 16, 32, 64, 128, 256, 512, 1024, 2048, 4096, 8192, 16384, 32768, 65536, 131072, 262144, 524288, 1048576, 2097152, 4194304, 8388608, 16777216, 33554432, 67108864, 134217728, 268435456, 536870912};

int find(int &n)
{
    int l = 0;
    int r = divisors.size() - 1;
    while (l < r)
    {
        int mid = (l + r + 1) / 2;
        if (n % divisors[mid] == 0)
        {
            l = mid;
        }
        else
        {
            r = mid - 1;
        }
    }
    return l;
}

int minimizeNumber(vi &v)
{
    int ans = 1000000001;
    for (int i : v)
    {
        ans = min(find(i), ans);
    }
    return ans;
}

int main()
{
    int n;
    cin >> n;
    vi v(n);
    for (int &i : v)
        cin >> i;
    cout << minimizeNumber(v) << endl;
}
