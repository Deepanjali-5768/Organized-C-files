//Program to input and display a 2D matrix
#include <stdio.h>//header file
int main()
{
    int x,y;//variable declaration
    printf("Enter row and column\n");
    scanf("%d%d",&x,&y);//user input
    int arr[x][y];//2D array declaration
    int i,j;
    for(i=0;i<x;i++)//loop to input array elements
    {
        for(j=0;j<y;j++)
            scanf("%d",&arr[i][j]);
    }
    printf("Displaying matrix\n");
    for(i=0;i<x;i++)//loop to display 2D array
    {
        for(j=0;j<y;j++)
            printf("%d\t",arr[i][j]);
        printf("\n");
    }
}
