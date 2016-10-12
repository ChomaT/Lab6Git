#include <stdio.h>

int main()
{
    char* fileName;
    printf("Specify file name you would like to print to: \n");
    fflush(stdout);
    scanf("%s", fileName);


    FILE *file1 = fopen(fileName, "w");

    char c;
    while ((c=getchar()) != EOF)
    {
        fprintf(file1, &c);
    }

    fclose(file1);

    printf("CTRL+d is a correct ending");

    return 0;
}
