//Program to show sorted array
#include <stdio.h>//header file
int main()
{
    int n;//variable declaration
    printf("Enter the size of array\n");
    scanf("%d",&n);
    int arr[n];
    int i;
    printf("Enter elements of array\n");
    for(i=0;i<n;i++)//loop to enter array elements
    {
        scanf("%d",&arr[i]);
    }
    printf("Displaying array elements\n");
    for(i=0;i<n;i++)//loop to display array elements
    printf("%d\t",arr[i]);
    int t;
    for(i=0;i<n;i++)//logic for sorted array
    {
        for(int j=0;j<n-1;j++)
        if(arr[j]>arr[j+1])
        {
            t=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=t;
        }
    }
    printf("\nDisplaying sorted array\n");
    for(i=0;i<n;i++)
    printf("%d\t",arr[i]);
    int q=n-1;
    int *x=&arr[0];
    int *y=&arr[q];
    int sum;
    printf("\nEnter the sum pair to find\n");
    scanf("%d",&sum);
    for(i=0;i<n;i++)
    {
        if(*x+*y==sum)
        {
            printf("Pair found %d and %d",*(x),*(y));
            break;
        }
        else if(*x+*y<sum)
        x=&arr[i+1];
        else if(*x+*y>sum)
        y=&arr[q--];
        else
        printf("Pair not found");
    }
}
