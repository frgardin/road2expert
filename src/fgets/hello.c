#include <stdio.h>

int main()
{
    char line[100];

    fgets(line, sizeof(line), stdin);

    printf("You entered: %s", line);
    return 0;
}