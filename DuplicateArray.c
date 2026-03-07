//Program to display duplicate array
#include <stdio.h>//header file
int main()
{
    int n;//variable declaration
    printf("Enter the size of array\n");
    scanf("%d",&n);//user input
    int arr[n];//array declaration
    int i;
    printf("Enter elements of array\n");
    for(i=0;i<n;i++)//loop logic to enter array elements
    {
        scanf("%d",&arr[i]);
    }
    printf("Displaying array elements\n");
    for(i=0;i<n;i++)//loop logic to display array elements
    printf("%d\t",arr[i]);
    int t;
    for(i=0;i<n;i++)//loop logic for duplicate array elements
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
    printf("\nDisplaying Frequency\n");
    int f=0,r=0,l=0;
    int x[50];
    int p=0;
    while(l<n)
    {
        for(i=0;i<n;i++)
        {
            if(arr[l]==arr[i])
            {
                r++;
                f=i;
            }
        }
        printf("%d\t%d\n",arr[l],r);
         if(r>1)
                {
                    x[p]=arr[l];
                    p++;
                }
        r=0;
        l=f+1;
    }
    printf("Displaying Duplicate elements of array\n");
    for(i=0;i<p;i++)//loop logic display duplicate array
    printf("%d\t",x[i]);
}
