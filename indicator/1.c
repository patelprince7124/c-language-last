#include <stdio.h>

int main() {
    char str[100];
    char *p;
    int length = 0;

    printf("Enter any string: ");
    fgets(str, sizeof(str), stdin);

    p = str;  
    while (*p != '\0' && *p != '\n') {
        length++;
        p++;   
    }

    printf("The length of a string is: %d", length);

    return 0;
}
