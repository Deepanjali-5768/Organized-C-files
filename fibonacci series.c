//Program to show Fibonacci Series
#include <stdio.h>//header File
void fibo(int n,int sum,int a,int b)//recursion Function
{
    if(a<=n)
    {
        printf("%d\n",sum);
       fibo(n,a+b,b,a+b);
    }
}
int main()
{
    int j;
    int x=0,u=0,v=1;//Variable declaration
    printf("Enter a number\n");
    scanf("%d",&j);//user input
    printf("Showing the fibo series\n");
    fibo(j,x,u,v);
}
