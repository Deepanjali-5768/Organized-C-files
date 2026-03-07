//program to solve quadratic equation
#include <stdio.h>
#include <math.h>//header file
int main()
{
float a,b,c;//variable declaration
printf("Enter the value of a,b and c of a quadratic equation\n");
scanf("%f%f%f",&a,&b,&c);//user input
float d=(b*b)-(4*a*c);
if(d>0)
{
  float alpha,beta;
alpha=((-b)+sqrt(d))/(2*a);
beta=((-b)-sqrt(d))/(2*a);
printf("1st quadratic root=%f\n2nd quadratic root=%f\n",alpha,beta);
}
else if(d=0)
{
   float alpha,beta;
alpha=((-b)+sqrt(d))/(2*a);
beta=alpha;
printf("1st quadratic root=%f\n2nd quadratic root=%f\n",alpha,beta);
}
else
{
  float real_part,imaginary_part;
real_part=-b/(2*a);
imaginary_part=sqrt(-d)/(2*a);
printf("1st quadratic root=%f+%fi\n2nd quadratic root=%f-%fi\n",real_part,imaginary_part,real_part,imaginary_part);
}
}
