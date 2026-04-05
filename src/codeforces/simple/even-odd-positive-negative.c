#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i =0;i<n;i++) {
        scanf("%d", &a[i]);
    }
    int even = 0;
    int odd = 0;
    int positive = 0;
    int negative = 0;
    for (int i =0;i<n;i++) {
        if (a[i] % 2 == 0) {
            even++;
        } else {
            odd++;
        }
        if (a[i] > 0) {
            positive++;
        } else if (a[i] < 0){
            negative++;
        }
    }

    printf("Even: %d\n", even);
    printf("Odd: %d\n", odd);
    printf("Positive: %d\n", positive);
    printf("Negative: %d\n", negative);
}
