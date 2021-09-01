#include <stdio.h>
#include <string.h>

int main()
{
    char input[100];
    scanf ("%[^\n]" ,&input);
    for (int i=strlen(input)-1; i>=0; i--)
    {
        printf ("%c" ,input[i]);
    }
    return 0;
}