//quicksort
#include <stdio.h>

void sort(int arr[],int first,int last){
   int i, j, pivot, swap;

   if(first<last){
      pivot=first;
      i=first;
      j=last;

      while(i<j){
         while(arr[i]<=arr[pivot]&&i<last)
            i++;
         while(arr[j]>arr[pivot])
            j--;
         if(i<j){
            swap=arr[i];
            arr[i]=arr[j];
            arr[j]=swap;
         }
      }

      swap=arr[pivot];
      arr[pivot]=arr[j];
      arr[j]=swap;
      sort(arr,first,j-1);
      sort(arr,j+1,last);
   }
}

int main()
{
	int input[5],i;
    for (i=0; i<5; i++)
    {
        scanf ("%d" ,&input[i]);
    }
	sort (input,0,i-1);
	printf ("%d" ,input[4]);
	return 0;
}