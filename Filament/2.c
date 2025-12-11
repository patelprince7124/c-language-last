#include <stdio.h>

int main()
{
    char a[100];
    int freq[256] = {0};   
    int i;

    printf("Enter the string: ");
    gets(a);

  
    for (i = 0; a[i] != '\0'; i++)
    {
        freq[a[i]]++;
    }

 
    printf("\nCharacter Frequency:\n");
    for (i = 0; i < 256; i++)
    {
        if (freq[i] != 0)
        {
            printf("%c = %d\n", i, freq[i]);
        }
    }

    return 0;
}
