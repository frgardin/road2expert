#include <stdio.h>

int main()
{
    int n;scanf("%d", &n);
    int a, b;
    a = n-1;
    b = 0;
    while (b < n) 
    {
        for (int i = 0; i<a;i++) {
            printf(" ");
        }
        for (int i = 0; i<b;i++) {
            printf("*");
        }
        printf("*");
        for (int i = 0; i<b;i++) {
            printf("*");
        }
        printf("\n");
        a--;
        b++;
    }
}
