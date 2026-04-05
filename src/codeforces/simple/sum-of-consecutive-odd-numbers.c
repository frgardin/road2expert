#include <stdio.h>

int main()
{
    int t;scanf("%d", &t);
    while (t--)
    {
        long long n, m;scanf("%lld %lld", &n, &m);
        long long min = (n > m) ? m : n;
        long long max = (n > m) ? n : m;
        long long sum = 0;
        for (long long i = (min % 2 == 0) ? min+1:min+2; i <= max-1;i+=2) {
            sum+=i;
        }
        printf("%lld\n", sum);
    }
}
