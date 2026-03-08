//Program for Reverse and Rotation of array
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the size of array\n");
    // Standard input for array size.
    // Note: 'n' must be positive to avoid undefined behavior.
    scanf("%d",&n);

    // Declaring a Variable Length Array (VLA).
    // This allocates space on the stack based on the value of 'n'.
    int arr[n];
    int i;

    // Data Entry Phase
    printf("Enter elements of array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    // Displaying the array in its original input order
    printf("Displaying array elements\n");
    for(i=0;i<n;i++)
        printf("%d\t",arr[i]);

    // Displaying the array in reverse order using a backward loop
    // Note: This does NOT change the actual array, it only changes how we view it.
    printf("\nDisplaying the reverse array\n");
    for(i=n-1;i>=0;i--)
        printf("%d\t",arr[i]);

    int y=0;
    // Interactive menu loop - continues until the user selects option 3
    while(y!=3)
    {
        printf("\nEnter the rotation you want\n1.Left Rotation\n2.Right Rotation\n3.Exit..\n");
        scanf("%d",&y);

        switch(y)
        {
            case 1:{
                // LEFT ROTATION LOGIC:
                // 1. Save the first element so it isn't overwritten.
                int t=arr[0];
                // 2. Shift every element one position to the left.
                for(i=0;i<n-1;i++)
                {
                    arr[i]=arr[i+1];
                }
                // 3. Move the original first element to the last position.
                arr[n-1]=t;

                // Output results of Left Rotation
                printf("Displaying the array\n");
                for(i=0;i<n;i++)
                {
                    printf("%d\t",arr[i]);
                }
                printf("\n");
                break;
            }
            case 2:{
                // RIGHT ROTATION LOGIC:
                // 1. Save the last element before it gets overwritten.
                int t1=arr[n-1];
                // 2. Shift every element one position to the right.
                // We loop backward to avoid overwriting values before they move.
                for(i=n-1;i>0;i--)
                {
                    arr[i]=arr[i-1];
                }
                // 3. Move the original last element to the first position.
                arr[0]=t1;

                // Output results of Right Rotation
                printf("Displaying the array\n");
                for(i=0;i<n;i++)
                {
                    printf("%d\t",arr[i]);
                }
                printf("\n");
                break;
            }
            case 3:
                printf("Exiting the code...\n");
                break;
            default:
                printf("Invalid choice\n");
        }
    }
    return 0; // Proper practice to return an exit status
}
