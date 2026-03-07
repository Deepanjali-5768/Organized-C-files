#include <stdio.h>//Header file
int main()
{
int a,b,sum,sub,mult,div,mod;//variable declaration
printf("Enter the value of a and b\n");
scanf("%d%d",&a,&b);//taking value from user
sum=a+b;
sub=a-b;
mult=a*b;
printf("Sum =%d\nSubtraction =%d\nMultiplication =%d\n",sum,sub,mult);
if(b!=0)//condition to check for division and modulus
{
    mod=(int)a%b;
    div=(int)a/b;
    printf("Division=%d\n",div);
    printf("Modulus=%d\n",mod);
}//losing if statement
else//condition if b=0
{
    printf("Division: Undefined(Division by zero)\n");
    printf("Modulus: Undefined(Division by zero)\n");
}//closing else statement
}
