#include <stdio.h>

int main()
{
    char *p = "Mizzou";
    p[ 3 ] = 'P';
    printf("%s",p);
    fflush(stdout);

    return 0;
}
