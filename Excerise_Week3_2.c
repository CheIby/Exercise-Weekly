#include <stdio.h>

int fac(int input)
{
    if (input>=1)
    {
        return input*fac(input-1);
    }
    else 
    {
        return 1;
    }
}

int main()
{
    int input;
    scanf ("%d" ,&input);
    printf ("%d" ,fac(input));
    return 0;
}