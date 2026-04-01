#include <stdio.h>

int main() {
    int n;scanf("%d", &n);
    if (n == 1) {
        printf("%d\n", 0);
        return 0;
    }
    if (n == 2) {
        printf("%d %d\n", 0, 1);
        return 0;
    }
    
    int a[n];
    int i=2;
    a[0]=0;
    a[1]=1;

    printf("%d %d ", a[0], a[1]);

    while (i<n) {
        a[i] = a[i-1] + a[i-2];
        printf("%d ", a[i++]);
    }
    printf("\n");
}
