#include <stdio.h>

int main() {
    int t;scanf("%d", &t);
    while (t--) {
        long long n; scanf("%lld", &n);
        long long d = 10;
        while (n / d > 0) {
            d*=10;
        } 
        long long d2=10;
        while (d2<d) {
            printf("%lld ", (n%d2)/(d2/10));
            d2*=10;
        }
        printf("%lld\n", (n%d2)/(d2/10));
    }
}
