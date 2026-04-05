#include <stdio.h>

int powInt(int a, int b)
{
    int acc=1;
    for (int i = 0;i<b;i++) 
    {
        acc*=a;
    }
    return acc;
}

int main()
{
    int t;scanf("%d", &t);
    while (t--)
    {
        int n;scanf("%d", &n);
        int b[32];
        int i=0;
        int ans=0;
        while (n > 0) 
        {
            if (n%2 == 1)
            {
                b[i]=1;
            } else
            {
                b[i]=0;
            }
            i++;
            n/=2;
        }
        int k=0;
        for (int j = 0;j<i;j++) 
        {
            ans+=(b[j] == 0) ? 0 : b[j]*powInt(2,k++);
        }
        printf("%d\n", ans);
    }
}
