#include <stdio.h>
void swap(int x, int y)
{
    int g=x;
   x=y;
   y=g;
    printf("Swapped no.=%d %d\n",x,y);
    return 0;
}
int main()
{
    int a,b;
    printf("Enter the two no.\n");
    scanf("%d%d",&a,&b);
    swap(a,b);
    return 0;
}
