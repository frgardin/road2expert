#include <stdio.h>
#include <stdbool.h>
#include <string.h>

// Function to check if the string can be a palindrome after deleting at most one character
bool validPalindrome(const char* s) {
    // Write your code here
    int d = 0;
    int n = strlen(s);
    while (d<n) {
        int l = 0;
        int r = strlen(s)-1;
        bool b=true;
        while (l < r) {
            if (l == d) l++;
            if (r == d) r--;
            if (s[l] != s[r]) {
                b = false;
                break;
            }
            l++;
            r--;
        }
        if (b) return true;
        d++;
    }
    return false;
}

int main() {
    int n;
    scanf("%d", &n);
    char s[100000];
    scanf("%s", s); // Read the input string
    printf("%s\n", validPalindrome(s) ? "true" : "false"); // Output the result
    return 0;
}