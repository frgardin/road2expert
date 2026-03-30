#include<stdio.h>

int swap(int a, int b)
{
    printf("%d %d\n", b, a);
}
int main()
{
    int a, b;scanf("%d %d", &a, &b);
    swap(a, b);
}
