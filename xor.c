// Program to show XOR operator working
#include <stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);// user input
    printf("%d\t%d\n",a,b);
    a=a^b;//XOR operation
    b=a^b;
    a=a^b;
    printf("%d\t%d",a,b);
    return 0;
}
