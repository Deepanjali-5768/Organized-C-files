//Program to demonstrate modular function
#include <stdio.h>//header file
int fun(int x,int y)
{
    int sum=x*x+y*y+1;
    return sum;
}
int great(int x,int y)
{
    int r;
    if(x>y)
    r=x;
    else
    r=y;
    return r;
}
int main()
{
    int a,b,w;//variable declaration
    scanf("%d%d",&a,&b);//user input
    w=fun(a,b);
    printf("%d\n",w);
    int max=great(a,b);
    printf("maximum=%d",max);
    return 0;
}
