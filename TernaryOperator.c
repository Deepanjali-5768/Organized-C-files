//Program to show ternary operator
#include <stdio.h>//header file
int main()
{
int a,b,c,max;//variable declaration
printf("Enter three no. a,b and c\n");
scanf("%d%d%d",&a,&b,&c);//user input
max=((a<b)?((a<c)?a:c):(b<c)?b:c);//ternary operator
printf("Maximum=%d",max);
}
