//Program to display pattern similar to butterfly
#include <stdio.h>//header file
int main()

    {
        int i,x,y=1,j,e=7,t;//variable declaration
        for(i=3;i>=1;i--)//loop execution
        {

            t=y*2;
            for(x=1;x<=t/2;x++)
            {
                printf("*");
            }
            for(j=1;j<=e;j++)
            {
                printf(" ");
            }
            for(x=1;x<=t/2;x++)
            {
                printf("*");
            }
            e-=2;
            y++;
            printf("\n");
        }
        for(i=1;i<=9;i++)
        {
            printf("*");
        }
        printf("\n");
        y=3;e=3;
        for(i=3;i>=1;i--)
        {
            t=y*2;
            for(x=t/2;x>=1;x--)
            {
                printf("*");
            }
            for(j=e;j>=1;j--)
            {
                printf(" ");
            }
            for(x=t/2;x>=1;x--)
            {
                printf("*");
            }
            e+=2;
            y--;
            printf("\n");
        }
    }

