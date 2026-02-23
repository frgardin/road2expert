#include <stdio.h>

int main() {
	// your code goes here
    int n, x;
    scanf("%d %d", &n, &x);
    int a[n];
    for (int i =0;i<n;i++) {
        scanf("%d", &a[i]);
    }
    for (int i =0;i<n;i++) {
        if (a[i] == x) {
            printf("YES");
            return 0;
        }
    }
    printf("NO");
    return 0;
}


