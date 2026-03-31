#include <stdio.h>

int powInt(int a, int b){
    int result=1;
    for (int i =0;i<b;i++) {
        result*=a;
    }
    return result;
}

int value(int n, int l, int r) {
    return ((n % powInt(10, l)) / powInt(10, r));
}

int sumOfDigits(int n) {
    int l = 1;
    int r =0;
    int sum=0;
    while (powInt(10, l) <= n) {
        sum+=value(n, l, r);
        l++;
        r++;
    }
    sum+=value(n, l, r);
    return sum;
}

int isBetween(int n, int a, int b) {
    return n >= a && n <= b;
}

int main() {
    int n, a, b;
    scanf("%d %d %d", &n, &a, &b);
    int sum=0;
    for (int i =1;i<=n;i++) {
        if (isBetween(sumOfDigits(i), a, b)) {
            sum+=i;
        }
    }
    printf("%d\n", sum);
}
