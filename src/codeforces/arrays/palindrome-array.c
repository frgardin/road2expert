#include<stdio.h>

int main() {
    int n;scanf("%d", &n);
    int a[n];
    int i =0;
    while (i<n) scanf("%d", &a[i++]);
    int l = 0, r = n-1;
    while (l<r) {
        if (a[l++] != a[r--]) {
            printf("NO\n");
            return 0;
        }
    }
    printf("YES\n");
    return 0;
}
