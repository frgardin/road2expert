#include <stdio.h>
#include <stdlib.h>
#include <time.h>



int main() {
    srand(time(0));
    int dup = rand()%100 +1;
    for (int i = 1; i <= 100; i++) {
        if (i == dup) {
            printf("%d\n", i);    
        }
        printf("%d\n", i);
    }
    return 0;
}