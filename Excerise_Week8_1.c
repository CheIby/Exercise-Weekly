#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h> 

int main()
{
    int x,y;
    printf ("x : ");
    scanf ("%d" ,&x);
    printf ("y : ");
    scanf ("%d" ,&y);
    x = x + y;
    y = x - y;
    x = x - y;
    printf ("x = %d, y = %d" ,x,y);
    return 0;
}