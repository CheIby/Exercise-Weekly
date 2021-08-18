#include <stdio.h>
#include <math.h>

int main()
{
    int x,y,a,b,gcd=1,i=2,lcd;
    scanf ("%d %d" ,&x,&y);
    a=x;
    b=y;
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
    lcd=abs(a*b)/gcd;
    printf ("%d %d" ,gcd,lcd);
}