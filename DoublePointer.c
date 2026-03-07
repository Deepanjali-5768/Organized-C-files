//Program to show concept of double pointer
#include <stdio.h>//header file
int main()
{
    int a=8;int b=9;
    int *r=&a;//pointer
    printf("a=%d",*r);
    int **d=&r;//double pointer
    printf("d=%d",**d);
    int *p=NULL;
    printf("\n=%d",r);
    printf("\n**=%d",p);
}
