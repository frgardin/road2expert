#include <stdio.h>

int main() {
    int n;scanf("%d", &n);
    int a[n];
    int i=0;
    while (i<n) scanf("%d", &a[i++]);
    i = 0;
    while (i<n) {
        if (a[i] > 0) {
            a[i++]=1;
            continue;
        }
        if (a[i] < 0) {
            a[i++]=2;
            continue;
        }
        i++;
    }
    i = 0;
    while (i<n) printf("%d ", a[i++]);
    printf("\n");
}
