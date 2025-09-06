// Program to Merge Two Arrays
#include <stdio.h>
int main()
{
    int arr1[5] = {10, 20, 30, 40, 50};
    int arr2[5] = {60, 70, 80, 90, 100};
    int arr3[10], i, j;
    for (i = 0; i < 5; i++) // Copy elements of arr1 into arr3
    {
        arr3[i] = arr1[i];
    }
    for (j = 0; j < 5; j++) // Copy elements of arr2 into arr3 (after arr1's elements)
    {
        arr3[i + j] = arr2[j];
    }
    printf("Merged array: ");
    for (i = 0; i < 10; i++) // Print the merged array
    {
        printf("%d ", arr3[i]);
    }
    return 0;
}
/*output: Merged array: 10 20 30 40 50 60 70 80 90 100
 */