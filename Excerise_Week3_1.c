#include <stdio.h>

int main()
{
    int input,output=1;
    scanf ("%d" ,&input);
    for (int i=1; i<=input; i++)
    {
        output=output*i;
    }
    printf ("%d" ,output);
    return 0;
}