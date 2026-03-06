#include <stdio.h>

int main() {
    int a = 69;
    int b = 420;
    printf("%d %d\n",a , b);
    // int x = b;
    // int y = a;
    // a = x;
    // b = y;
    // // printf("%d %d\n",a , b);
    // int t = a;
    // a = b;
    // b = t;
    // printf("%d %d\n",a , b);
    a ^= b; // a = a^b;
    b ^= a; // b = a^b^b = a;
    a ^= b; // a = a^b^a = b
    printf("%d %d\n", a, b);
    return 0;
}