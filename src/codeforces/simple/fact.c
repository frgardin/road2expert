#include <stdio.h>

long long fact(int n) {
    if (n == 1 || n == 0) {
        return 1;
    }
    return fact(n-1) * n;
}

int main() {
    int t;scanf("%d", &t);
    while (t--)
    {
        int n;scanf("%d", &n);
        printf("%lld\n", fact(n));
    }
}
