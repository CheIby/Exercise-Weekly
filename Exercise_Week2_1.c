#include <stdio.h>

int main()
{
    int x,y,gcd=1,i=2;
    scanf ("%d %d" ,&x,&y);
    while (i<=x && i<=y)
    {
        if (x%i==0 && y%i==0)
        {
            x=x/i;
            y=y/i;
            gcd=gcd*i;
            i=2;
        }
        else
        {
            i++;
        }
    }
    printf ("%d %d" ,gcd,gcd*x*y);
}