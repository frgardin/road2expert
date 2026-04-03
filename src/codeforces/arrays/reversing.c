#include <stdio.h>
 
int main() {
        int n;scanf("%d", &n);
        int a[n];
        int i =0;
        while (i<n) scanf("%d", &a[i++]);
        i = 0;
        while (i<n/2) {
                int aux = a[i];
                a[i] = a[n-1-i];
                a[n-1-i] = aux;
                i++;
        }
        i =0;
        while (i<n) printf("%d ", a[i++]);
        printf("\n");
}
