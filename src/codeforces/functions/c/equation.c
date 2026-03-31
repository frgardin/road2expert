#include <stdio.h>

long powInt(long a, long b) {
    long r = 1;
    for (long i = 1;i<=b;i++) {
        r*=a;
    }
    return r;
}

int main() {
    long x, n;
    scanf("%ld %ld", &x, &n);
    long ans = 0;
    for (long i =2;i<=n;i+=2) {
        ans+=powInt(x, i);
    }
    printf("%ld\n", ans);
}
