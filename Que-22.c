// Program to Split Array into Even and Odd Elements
#include <stdio.h>
int main()
{
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int even[10], odd[10];         // Arrays to store even and odd numbers separately
    int i, ecount = 0, ocount = 0; // Counters for even and odd arrays
    for (i = 0; i < 10; i++)
    {
        if (a[i] % 2 == 0) // Check if number is even
        {
            even[ecount] = a[i]; // Store in even array
            ecount++;            // Increase even count
        }
        else
        {
            odd[ocount] = a[i]; // Store in odd array
            ocount++;           // Increase odd count
        }
    }
    printf("Even elements: ");
    for (i = 0; i < ecount; i++) // Print even array elements
    {
        printf("%d ", even[i]);
    }
    printf("\nOdd elements: ");
    for (i = 0; i < ocount; i++) // Print odd array elements
    {
        printf("%d ", odd[i]);
    }
    return 0;
}
/*output: Even elements: 2 4 6 8 10
Odd elements: 1 3 5 7 9
*/