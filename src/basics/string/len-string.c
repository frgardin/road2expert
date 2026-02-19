#include <stdio.h>
#include <string.h>

int main() {
    char message[10];

    message[0] = 'h';
    message[1] = 'e';
    message[2] = 'l';
    message[3] = 'l';
    message[4] = 'o';
    message[5] = '\0';

    printf("Length of the message: %ld\n", strlen(message)); 

    return 0;
}