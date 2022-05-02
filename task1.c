#include <stdio.h>

int main()
{
    char str[9]="A string.";
    char *ptr=str;
    printf("%c %c %c\n",str[0],*ptr,ptr[3]);
    ptr+=2;
    printf("%c %c %c",*ptr,ptr[2],ptr[5]);
    return 0;
}
