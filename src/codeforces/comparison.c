#include <stdio.h>
 
int main() {
        int a, b;
        char c;
        scanf("%d %c %d", &a, &c, &b);
        if (c == '>' && a > b) {
                printf("Right\n");
                return 0;
        }
        if (c == '>') {
                printf("Wrong\n");
                return 0;
        }
        if (c == '<' && a < b) {
                printf("Right\n");
                return 0;
        }
        if (c == '<') {
                printf("Wrong\n");
                return 0;
        }
        if (c == '=' && a == b) {
                printf("Right\n");
                return 0;
        }
        printf("Wrong\n");
        return 0;
}
