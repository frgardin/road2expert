#include <stdio.h>


int main() {
    int a[3];
    scanf("%d %d %d", &a[0], &a[1], &a[2]);
    int b[3];
    
    for (int i =0;i<3;i++) {
        b[i] = a[i];
    }
    
    for (int i =0;i<3;i++) {
        for (int j = i+1; j< 3;j++) {
            if (b[j] < b[i]) {
                b[j] = b[i]^b[j];
                b[i] = b[j]^b[i];
                b[j] = b[i]^b[j]; 
            }
        }
    }    


    for (int i =0;i < 3; i++) {
        printf("%d\n", b[i]);
    }
    printf("\n");
    for (int i =0;i < 3; i++) {
        printf("%d\n", a[i]);
    }
    
    
    return 0;
}
