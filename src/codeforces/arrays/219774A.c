#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int a[n];
    int i=0;
    while (i<n){
        scanf("%d", &a[i++]);
    }
    i = 0;
    long long ans=0;
    while (i<n) {
        ans+=a[i++];
    }
    printf("%lld\n", ans > 0 ? ans : -ans);
}
