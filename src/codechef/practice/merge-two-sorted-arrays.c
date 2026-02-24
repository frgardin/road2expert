#include <stdio.h>

int main() {
	// your code goes here
	int n1, n2;
	scanf("%d %d", &n1, &n2);
	int a1[n1];
	int a2[n2];
    int i1 = 0;
    while (i1 < n1) {
        scanf("%d", &a1[i1]);
        i1++;
    }
    int i2 = 0;
    while (i2 < n2) {
        scanf("%d", &a2[i2]);
        i2++;
    }
    int a3[n1+n2];
    i1=0;
    i2=0;
    int i3=0;
    while (i1 < n1 && i2 < n2) {
        if (a1[i1] > a2[i2]) {
            a3[i3] = a2[i2];
            i2++;
        } else {
            a3[i3] = a1[i1];
            i1++;
        }
        i3++;
    }
    while (i1 < n1) {
        a3[i3] = a1[i1];
        i1++;
        i3++;
    }
    while (i2 < n2) {
        a3[i3] = a2[i2];
        i2++;
        i3++;
    }
    
    for (int j = 0; j < n1 + n2;j++) {
        printf("%d ", a3[j]);
    }
    return 0;
}

