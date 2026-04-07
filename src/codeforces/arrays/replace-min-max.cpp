#include <iostream>   // cin, cout
#include <vector>     // vector
#include <algorithm>  // min_element, max_element, iter_swap

using namespace std;

typedef vector<int> vi;

int main()
{
    int n; cin >> n;
    vi v(n);
    for (int &x : v) cin >> x;

    iter_swap(min_element(v.begin(), v.end()),
              max_element(v.begin(), v.end()));

    for (int x : v) cout << x << ' ';
    cout << '\n';
}
