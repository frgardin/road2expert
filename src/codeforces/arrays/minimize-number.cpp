#include <iostream>
#include <set>
#include <algorithm>
#include <unordered_map>

using namespace std;

typedef set<int> si;
typedef unordered_map<int> umi;

int[] divisors = {1, 2, 4, 8, 16, 32, 64, 128, 256, 512, 1024, 2048, 4096, 8192, 16384, 32768, 65536, 131072, 262144, 524288, 1048576, 2097152, 4194304, 8388608, 16777216, 33554432, 67108864, 134217728, 268435456, 536870912};

int minimizeNumber(si s)
{
    int ans = 1000000001;
}

int main()
{
    int n;cin >> n;
    si s(n);
    for (int &i : s) cin >> i;
    cout << minimizeNumber(s) << endl;
}
