#include <stdio.h>

int main() {
    int n;scanf("%d", &n);
    int a[n];
    int i=0;
    while (i<n) scanf("%d", &a[i++]);
    int lowest = 100000;
    i =0;
    while (i<n) {
        lowest = lowest < a[i] ? lowest : a[i];
        i++;
    }
    i =0 ;
    while (i<n) {
        if (a[i] == lowest) {
            printf("%d %d\n", lowest, i+1);
            return 0;
        }
        i++;
    }
    return 0;
}
