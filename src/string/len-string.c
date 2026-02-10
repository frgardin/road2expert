#include <stdio.h>
#include <string.h>

int main() {
    // Declare and initialize a string message
    char message[] = "Hello";

    // Use strlen() to calculate the number of characters in the message
    int length = strlen(message);

    // Print the length of the message
    printf("Length of the message: %d\n", length);  // Output: 5

    return 0;
}