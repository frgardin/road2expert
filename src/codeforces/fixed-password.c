#include<stdio.h>

int main() {
    char pass[] = "1999";
    char wrong[] = "Wrong\n";
    char correct[] = "Correct\n";
    char s[5];
    while (scanf("%s", s) == 1) {
        int b=0;
        for (int i=0;i<4;i++) {
            if (s[i] != pass[i]) {
                printf("%s", wrong);
                b=1;
                break;
            }
        }
        if (!b) {
            printf("%s", correct);
            return 0;
        }
    }
}
