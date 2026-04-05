#include <stdio.h>

int main() 
{   
    int n,m;
    while (scanf("%d %d", &n, &m) != EOF && n > 0 && m > 0) 
    {
        int sum = 0;
        int min = (n > m) ? m : n;
        int max = (n > m) ? n : m;
        for (int i = min; i<=max;i++) 
        {
            sum+=i;
            printf("%d ", i);
        }
        printf("sum =%d\n", sum);
    }
    return 0;
}
