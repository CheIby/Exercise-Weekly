#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[2][100],c;
    FILE *input,*output;
    printf ("Input : ");
    scanf ("%s" ,str[0]);
    printf ("Output : ");
    scanf ("%s" ,str[1]);
    input = fopen(str[0],"r");
    if (input == '\0')
    {
        printf ("Can't open file");
        exit(0);
    }
    output=fopen (str[1], "w");
    while ((c = fgetc(input)) != EOF)
    {
        fputc (c,output);
    }
    fclose(input);
    fclose(output);
    return 0;
}