//Program for leap year
#include <stdio.h>//header file
void main()
{
int year;//variable declaration
printf("enter a year");
scanf("%d",&year);
if(year%400==0||year%4==0&&year%100!=0)//leap year condition
{
printf("Leap year");
}
else
printf("not a leap year");
}
