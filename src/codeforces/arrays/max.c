#include <stdio.h>

int main() {
    int n;scanf("%d", &n);
    int a[n];
    int i=0;
    while (i<n)scanf("%d", &a[i++]);
    i =0;
    int max=0;
    while (i<n){max=(max > a[i]) ? max : a[i];i++;}
    printf("%d\n", max);
}
