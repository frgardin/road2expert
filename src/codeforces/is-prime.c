#include <stdio.h>

int main() {
    int n; scanf("%d", &n);
    if (n == 2) {
        printf("YES\n");
        return 0;
    }
    if (n % 2 == 0) {
        printf("NO\n");
        return 0;
    }
    int i =3;
    while (n % i != 0 && i < n) {
        i++;
    }
    if (i == n ) {
        printf("YES\n");
        return 0;    
    }
    printf("NO\n");
    return 0;
}