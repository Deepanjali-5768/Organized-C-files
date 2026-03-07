//program to show max min middle and frequency in an array
#include <stdio.h>//header file
int main()
{
    int n;
    printf("Enter the size of array\n");
    scanf("%d",&n);
    int arr[n];
    int i;
    printf("Enter elements of array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Displaying array elements\n");
    for(i=0;i<n;i++)
    printf("%d\t",arr[i]);
    int t;
    for(i=0;i<n;i++)
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
    printf("\nSmallest element=%d",arr[0]);
    if(n%2==0)
    printf("\nMiddle element of array=%d\t%d",arr[n/2-1],arr[n/2]);
    else
    printf("\nMiddle element of array=%d",arr[(n+1)/2-1]);
    printf("\nLargest element=%d",arr[n-1]);
    printf("\nDisplaying Frequency\n");
    int f=0,r=0,l=0;
    while(f!=n-1)
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
        r=0;
        l=f+1;
    }
}
