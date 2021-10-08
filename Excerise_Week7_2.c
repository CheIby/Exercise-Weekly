#include <stdio.h>
#include <stdlib.h>

int main()
{
    int check=1;
    FILE *output;
    output = fopen ("data.txt" ,"w");
    if (output == '\0')
    {
        printf ("Can't open file");
        exit(0);
    }
    printf ("Input data string:\n");
    while (check!=0)
    {
        char str[100];
        scanf ("%s" ,&str);
        fprintf (output, "%s\n" ,str);
        if (str[0]=='.')
        {
            check=0;
        }
    }
    fclose (output);
    return 0;
}