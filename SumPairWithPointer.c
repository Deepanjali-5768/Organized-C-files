#include <stdio.h>
int main()
{
    int n;
    printf("Enter the size of array\n");
    if (scanf("%d", &n) != 1 || n <= 0) return 1; // Basic safety check

    int arr[n];
    int i;

    printf("Enter elements of array\n");
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // --- BUBBLE SORT ---
    // Necessary because Two-Pointer search ONLY works on sorted data.
    int t;
    for(i=0; i<n; i++)
    {
        for(int j=0; j<n-1; j++)
        {
            if(arr[j] > arr[j+1])
            {
                t = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = t;
            }
        }
    }

    printf("\nSorted array:\n");
    for(i=0; i<n; i++) printf("%d\t", arr[i]);

    // --- CORRECTED TWO-POINTER LOGIC ---
    int left = 0;      // Index for the smallest element
    int right = n - 1; // Index for the largest element
    int target_sum;
    int found = 0;     // Flag to track if we actually found a match

    printf("\nEnter the sum pair to find: ");
    scanf("%d", &target_sum);

    // Use a while loop. A for loop is the wrong tool for this job.
    // We stop when the pointers meet in the middle.
    while (left < right)
    {
        int current_sum = arr[left] + arr[right];

        if (current_sum == target_sum)
        {
            printf("Pair found: %d and %d\n", arr[left], arr[right]);
            found = 1;
            break; // Exit once the first pair is found
        }
        else if (current_sum < target_sum)
        {
            // Sum is too small; move the left pointer to a larger value
            left++;
        }
        else
        {
            // Sum is too large; move the right pointer to a smaller value
            right--;
        }
    }

    if (!found)
    {
        printf("No pair found with the given sum.\n");
    }

    return 0;
}
