//Program to display table of any number
#include <stdio.h>//header file
int main()
{
    int i,j;//variable declaration
    printf("Enter a no.\n");
    scanf("%d",&i);//user input
    printf("Displaying table of %d\n",i);
    for(j=1;j<=10;j++)//loop logic
        printf("%d * %d = %d\n",i,j,i*j);
}
