#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int n; cin >> n;
    priority_queue<int> pq;
    while (n--) {
        char c; cin >> c;
        if (c == '+') {
            int v; cin >> v;
            pq.push(v);
        } else {
            pq.pop();
        }
        cout << pq.top() << endl;
    }
}

