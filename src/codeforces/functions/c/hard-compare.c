#include <stdio.h>
#include <math.h>

char* hardCompare(double a, double b, double c, double d) {
    if (log(a)*b > log(c)*d) {
        return "YES\n\0";
    }
    return "NO\n\0";
}



int main() 
{
    double a, b, c, d;
    scanf("%lf %lf %lf %lf", &a, &b, &c, &d);
    printf("%s", hardCompare(a, b, c, d));
}