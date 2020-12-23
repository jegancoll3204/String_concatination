#include<stdio.h>
#include<string.h>
char str_con(char a[],char b[]);
int main()
{
    char a[]="i am ";
    char b[]=" Good boy";
    str_con(a,b);
}

char str_con(char a[],char b[])
{
    printf("=-=-=-=-=-=-=-=-=-=-=-=-=\n");
    printf("First String   : %s\n",a);
    printf("Second String  : %s\n",b);
    strcat(a,b);
    printf("\nConcatination: %s",a);
    printf("\n=-=-=-=-=-=-=-=-=-=-=-=-=-=");
    printf("\n");
}