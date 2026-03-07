//Program to demonstrate factorial through recursion
#include <stdio.h>//header file
int pro=1;//global variable
int fact(int n)//recursion function display factorial
{
    if(n!=0)
    {
        pro=1;
      int ans=jjj(n);
      fact(n-1);
      printf("%d!=%d\n",n,ans);
    }
    return 0;
}
int jjj(int i)//recursion function to calculate factorial
{
    if(i!=0)
    {
    pro= pro*i;
    jjj(i-1);
    }
    return pro;
}
int main()
{
    printf("Enter a no.\n");
    int x;//variable declaration
    scanf("%d",&x);//user input
    fact(x);//calling fact function
}
