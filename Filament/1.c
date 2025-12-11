#include <stdio.h>

void main()
{
    char a[80];
    int i, j, k, flag = 0;

    printf("Enter the string: ");
    gets(a);

   
    for (i = 0; a[i] != '\0'; i++);

    k = i - 1;

  
    for (i = 0, j = k; i < j; i++, j--)
    {
        if (a[i] != a[j])
        {
            flag = 1;
            break;
        }
    }

    if (flag == 0)
        printf("The given string is a Palindrome");
    else
        printf("The given string is NOT a Palindrome");
}
