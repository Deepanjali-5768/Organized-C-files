//Program to show Reverse array with help of pointer
#include <stdio.h>//header file
int main()
{
    int n;
    printf("Enter the size of array\n");
    scanf("%d",&n);//user input
    int arr[n];
    int *p;//pointer declaration
    int i;
    printf("Enter the elements of array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Array entered\n");
    for(i=0;i<n;i++)
        printf("%d\t",arr[i]);
    printf("\nReverse array\n");
    for(i=n-1;i>=0;i--)
    {
        printf("%d\t",arr[i]);
    }
    printf("\nReverse array with address\n");
    printf("value\tNumber\n");
    for(i=n-1;i>=0;i--)
    {
        p=&arr[i];
        printf("%d\t%d\n",arr[i],p);
    }
}
