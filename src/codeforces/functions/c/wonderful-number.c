#include <stdio.h>

int main() {
    long long n;scanf("%lld", &n);
    if (n % 2 == 0) {
        printf("NO\n");
        return 0;
    }

    int a[31];
    int i =0;
    while (n > 0) {
        a[i++]=n%2;
        n/=2;
    }
    for (int j = 0;j<i/2;j++) {
        if (a[j] != a[i-j-1]) {
            printf("NO\n");
            return 0;
        }
    }
    printf("YES\n");
}
