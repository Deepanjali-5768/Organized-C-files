//Program to find maximum, minimum and second largest element in an array.
#include <stdio.h>//header file
int main()
{
    int n;//variable declaration
    printf("Enter the number for array\n");
    scanf("%d",&n);//user input
    int arr[n];//array declaration
    int i;
    printf("Enter elements of array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Displaying elements of array\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
    int max=arr[0];
    for(i=1;i<n;i++)
    {
        if(max<arr[i])
        {
            max=arr[i];
        }
    }
    printf("\nMaximum Element of array is %d\n",max);
    int min=arr[0];
    for(i=1;i<n;i++)
    {
        if(min>arr[i])
        min=arr[i];
    }
    printf("Minimum element of array is %d\n",min);
    int d=arr[0];
    int x=0;
    for(i=1;i<n;i++)
    {
        if(d<arr[i]&&d<max)
        {
            d=arr[i];
            if(d!=max)
            x=d;
        }
    }
    printf("Second maximum element of array is %d\n",x);
}
