#include <stdio.h>
#include <string.h>

int main() {
    char str1[100] = "Hello";
    char str2[] = " World";
    
    printf("str1: %s\n", str1);
    printf("str2: %s\n", str2);
    

    printf("strcat: %s\n", strcat(str1, str2));

    printf("str1: %s\n", str1);
    return 0;
}