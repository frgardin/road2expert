#include <stdio.h>

int main() {
	// your code goes here
    int l = 0, r = 0, i = 0;
    int n, k;
    scanf("%d %d", &n, &k);
    int a[n];
    while (i<n) {
        scanf("%d", &a[i]);
        i++;
    }
    int sum =0;
    int maxSum=0;
    for (int j = 0;j<k;j++) {
        sum+=a[j];    
    }
    maxSum=sum;
    r=k;
    while (r < n) {
        sum+=a[r];
        sum-=a[l];
        maxSum=sum > maxSum ? sum : maxSum;
        r++;
        l++;
    }
    printf("%d\n", maxSum);
    return 0;
}

