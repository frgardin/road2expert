#include <stdio.h>
#include <string.h>

int main() {
    char s[10];
    char floatString[4];
    char intString[8];
    scanf("%s", s);
    size_t n = strlen(s);
    int isFloat = 0;
    int indexOfPoint;
    for (int i = n-1;i>=0;i--) {
        char c = s[i];
        if (c == '.') {
            indexOfPoint = i;
            break;
        }
        if (c != '0') {
            isFloat = 1;
        }
    }
    for (int i = indexOfPoint+1; i<n;i++) {
        floatString[i-indexOfPoint-1] = s[i];
    }
    for (int i = 0; i<indexOfPoint;i++) {
        intString[i] = s[i];
    }
    intString[indexOfPoint] = '\0';

    if (isFloat) {
        printf("float %s 0.%s\n", intString, floatString);
    } else {
        printf("int %s\n", intString);
    }

    return 0;
}