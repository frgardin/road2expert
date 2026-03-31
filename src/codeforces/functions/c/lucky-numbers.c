#include <stdio.h>

int powInt(int a, int b){
    int result=1;
    for (int i =0;i<b;i++) {
        result*=a;
    }
    return result;
}

int value(int n, int l, int r) {
    return ((n % powInt(10, l)) / powInt(10, r));
}

int isLucky(int n) {
    int l = 1;
    int r = 0;

    while (powInt(10, l) < n) {
        int cur = value(n, l, r);
        if (cur != 7 && cur != 4) {
            return 0;
        }
        l++;
        r++;
    } 
    int last = value(n, l, r);
    return last == 7 || last == 4 ? 1 : 0; 
}


int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    int somebody=0;
    for (int i=a;i<=b;i++) {
        if (isLucky(i)) {
            printf("%d ", i);
            somebody =1;
        }
    }
    if (somebody == 0) {
        printf("-1 ");
    }
    printf("\n");
}

