//Program to show working of a bitwise operator
#include <stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    printf("a = %d, b = %d\n", a, b);
    printf("a & b = %d\n", a & b);// AND
    printf("a | b = %d\n", a | b);// OR
    printf("a ^ b = %d\n", a ^ b);// XOR
    printf("~a = %d\n", ~a);// NOT
    printf("b << 1 = %d\n", b << 1);// Left Shift
    printf("b >> 1 = %d\n", b >> 1);// Right Shift
    return 0;
}
