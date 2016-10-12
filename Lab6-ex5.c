#include<stdio.h>
#include<malloc.h>


int main()
{
    char *a = "hey";
    //free( a );
    a = "hello";
    printf("%s",a);
    return 0;
}
