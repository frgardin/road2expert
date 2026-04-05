#include<stdio.h>


int main() {
    int t;scanf("%d", &t);
    while (t--) {
        int n;scanf("%d", &n);
        int d = 100000000;
        int dn = 8;
        while (n < d) {
            d/=10;
            dn--;
        }
        while (n > 10) {
            printf("%d ", n/d);
            n = n % d;
            d/=10;
            dn--;
        }
        for (int i = 0; i<dn;i++) {
            printf("%d ", n);
        }
        printf("%d\n", n);
    }

    return 0;
}
