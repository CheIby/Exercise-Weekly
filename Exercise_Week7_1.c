#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[100][100];
    int check=1;
    int i=0;
    FILE *output;
    printf ("Input data string:\n");
    while (check!=0)
    {
        scanf ("%s" ,&str[i]);
        if (str[i][0]=='.')
        {
            check=0;
        }
        i++;
    }
    output = fopen ("data.txt" ,"w");
    if (output == '\0')
    {
        printf ("Can't open file");
        exit(0);
    }
    for (int j=0; j<i; j++)
    {
        fprintf (output, "%s\n" ,str[j]);
    }
    fclose (output);
    return 0;
}