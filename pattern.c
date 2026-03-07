//Program to display pattern
#include <stdio.h>//header file
#include <string.h>
int main()
{
    int i,j;//variable declaration
    for(i=7;i>=1;i--)
    {
        for(j=i;j>=1;j--)
        {
            printf("*");
        }
        printf("\n");
    }
}

