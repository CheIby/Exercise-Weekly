#include <stdio.h>

int main()
{
    int input,i=1;
    scanf ("%d" ,&input);
    while (i<=input)
    {
        int j=1;
        while (j<=input)
        {
            printf ("*");
            j++;
        }
        printf ("\n");
        i++;
    }
    return 0;
}