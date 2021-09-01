#include <stdio.h>
#include <string.h>

int main()
{
    char input[100];
    char output[100];
    scanf ("%[^\n]" ,&input);
    int j=strlen(input)-1;
    for (int i=0; i<strlen(input); i++)
    {
       output[j]=input[i];
       j--;
    }
    for (int i=0; i<strlen(input); i++)
    {
       printf ("%c" ,output[i]);
    }
    return 0;
}