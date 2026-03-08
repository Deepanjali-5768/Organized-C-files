//Program showing Kadane's Algorithm
#include <stdio.h>//header file
int main()
{
    int n,i;//variable declaration
    printf("Enter the size of array\n");
    scanf("%d",&n);//user input
    int arr[n];
    printf("Enter the elements of array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int sub;
    int max=0,streak=arr[0],record=arr[0];
    int s=0,e=0,ts=0;
     printf("Kandae's subarray is\n");
    for(i=1;i<n;i++)
    {
        max=streak+arr[i];
        if(arr[i]>max)
        {
            streak=arr[i];
            ts=i;
        }
        else
        streak=max;
        if(streak>record)
        {
            record=streak;
            e=i;
            s=ts;
        }
    }
     for(sub=s;sub<=e;sub++)
     printf("%d\t",arr[sub]);
    printf("\n");
    printf("Kandae's Algorithm current streak =%d\nAnd All time highest record =%d",streak,record);
    printf("\n");
}
