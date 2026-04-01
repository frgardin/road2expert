#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int a[n];
    int i = 0;
    while (i<n){
        scanf("%d", &a[i++]);
    }
    int x;
    scanf("%d", &x);
    i = 0;
    while (i<n) {
        if (a[i] == x) {
            printf("%d\n", i);
            return 0;
        }
        i++;
    }
    printf("-1\n");
}
