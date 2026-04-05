#include <stdio.h>
#include <math.h>

int isPrime(int n) {
    if (n < 2) return 0;
    if (n == 2) return 1;
    if (n % 2 == 0) return 0;

    int limit = (int) sqrt((double) n);
    for (int i =3;i<=limit;i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}


int main() {
    int n; scanf("%d", &n);
    printf((isPrime(n) ? "YES\n" : "NO\n"));
}