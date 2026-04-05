#include <stdio.h>

int main() {
    int a, b, c;
    char o, e;
    scanf("%d %c %d %c %d", &a, &o, &b, &e, &c);
    if (o == '+') {
        if (a + b == c) {
            printf("Yes\n");
            return 0;
        }
        printf("%d\n", a + b);
        return 0;
    }
    if (o == '-') {
        if (a - b == c) {
            printf("Yes\n");
            return 0;
        }
        printf("%d\n", a-b);
        return 0;
    }
    if (o == '*') {
        if (a * b == c) {
            printf("Yes\n");
            return 0;
        }
        printf("%d\n", a*b);
        return 0;
    }
}
