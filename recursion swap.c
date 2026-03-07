//program to swap through recursion
#include <stdio.h>//header file
void swap(int x,int y)
{
    int c=x;
    x=y;
    y=c;
    printf("Swapped no.=\n%d\n%d",x,y);
}
int main()
{
    int a,b;//variable declaration
    printf("enter two no.\n");
    scanf("%d%d",&a,&b);//user input
    swap(a,b);//calling swap method
}
