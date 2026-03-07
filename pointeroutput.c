//Program to output through pointer
#include <stdio.h>//header file
int main()
{
    int a= 3;
    int *i=&a;//pointer declaration
   printf("\nAddress of a=%d",&a);
   printf("\nAddress of a=%d",i);
   printf("\nAddress of i=%d",&i);
   printf("\nValue of i=%d",i);
   printf("\nValue of a=%d",a);
   printf("\nValue of a=%d",*(&a));
   printf("\nValue of a=%d",*i);
   int *r=a;
   printf("\nvalue=%d",*(&r));
}
