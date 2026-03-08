//Program of array element insertion and deletion
#include <stdio.h>//header file
int main()
{
    int l;//variable declaration
    printf("Enter the current elements of array\n");
    scanf("%d",&l);//user input
     int arr[200];//array declaration
    int i;
    for(i=0;i<l;i++)
    scanf("%d",&arr[i]);
    int y=0;
    while(y!=4)
    {
        printf("Enter the choice you want to:-\n1.Enter the element in array in given position\n2.Delete the element of an array from a given position\n3.Display the array elements\n4.Exiting...\n");
        scanf("%d",&y);
        switch(y)
        {
            case 1:{
            int p,n;
            printf("Enter the position and number you want to add\n");
            scanf("%d%d",&p,&n);
            p=p-1;
            int t=arr[p];
            arr[p]=n;
            int o;
            l=l+1;
            for(i=p+1;i<l;i++)
            {
                o=arr[i];
                arr[i]=t;
                t=o;
            }
            break;}
            case 2:{
            int d;
            printf("Enter the position number you want to delete\n");
            scanf("%d",&d);
            int t1=arr[d];
            l=l-1;
            for(i=d-1;i<l;i++)
            {
                arr[i]=t1;
                t1=arr[i+2];
            }
            break;}
            case 3:
             printf("Displaying array elements\n");
            for(i=0;i<l;i++)
            {
                printf("%d\t",arr[i]);
            }
            printf("\n");
            break;
            case 4:
            printf("Exiting the code....");
            break;
            default:
            printf("Invalid choice\n");
        }
    }
}
