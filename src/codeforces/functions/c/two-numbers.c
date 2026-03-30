#include <stdio.h>

int two_numbers(double a, double b)
{
    double c = a/b;
    int floor = (int)c;
    int ceil = floor == c ? floor : floor+1;
    int round = (c-.5)>=floor ? ceil : floor;
    printf("floor %d / %d = %d\n", (int)a, (int)b, floor);
    printf("ceil %d / %d = %d\n", (int)a, (int)b, ceil);
    printf("round %d / %d = %d\n", (int) a, (int) b, round);
}

int main()
{
    double a, b;
    scanf("%lf %lf", &a, &b);
    two_numbers(a, b);
}
