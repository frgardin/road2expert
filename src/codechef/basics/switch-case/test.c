#include <stdio.h>

int main() {
	// your code goes here
    char s[5]; int code;
    scanf("%s", s);
    
    if      (s[1] == 'i') code = 1;
    else if (s[2] == 'l') code = 2;
    else                  code = 3;        
    
    switch (code) {
        case (1):
            printf("Hi! How can I help you?\n");
        case (2):
            printf("Hello there!\n");
        case (3):
            printf("Hey, what's up?\n");
        default:
            printf("Nice to meet you.\n");
    }
    return 0;
}


