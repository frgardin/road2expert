#include <stdio.h>

int main() {
    char ch;  // Variable to store the character input

    // Ask the user to enter a character
    printf("Input some char: ");
    // Use getchar() to read a single character
    ch = getchar();

    // Use putchar() to print the entered character
    printf("You entered: ");
    putchar(ch);  // Display the entered character
    printf("\n");  // Move to the next line after output

    return 0;
}