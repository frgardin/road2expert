#include <stdio.h>

int gcd(int a, int b)
{
    int min =  a>b?b:a;
    for (int i = min;i>=1;i--) 
    {
        if (a % i == 0 && b % i == 0)
        {
            return i;
        }
    }
    return 1;

}

int main()
{
    int a, b;scanf("%d %d", &a, &b);
    printf("%d\n", gcd(a, b));
}
