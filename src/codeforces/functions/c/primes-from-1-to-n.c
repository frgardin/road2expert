#include <stdio.h>

int isPrime(int n) {
    if (n % 2 == 0 && n != 2) {
        return 0; 
    }
    
    if (n == 2) {
        return 1;
    }

    for (int i = 3; i<n/2;i+=2) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int n;scanf("%d", &n);
    for (int i =2;i<=n;i++) {
        if (isPrime(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

