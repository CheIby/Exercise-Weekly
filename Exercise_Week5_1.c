//bubblesort
#include <stdio.h>

void sort(int arr[])
{
    int swap;
    for (int i=0;i<5;i++)
    {
        for (int j=0;j<5-1-i;j++)
        {
            if (arr[j]>arr[j+1])
            {
                swap =arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=swap;
            }
        }
    }
}

int main()
{
    int input[5];
    for (int i=0; i<5; i++)
    {
        scanf ("%d" ,&input[i]);
    }
    sort(input);
    printf ("%d" ,input[4]);
    return 0;
}