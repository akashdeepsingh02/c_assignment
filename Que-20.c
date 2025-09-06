// Program to Delete Element from Array
#include <stdio.h>
int main()
{
    int arr[10] = {10, 20, 30, 40, 50};
    int n = 5, i, pos;

    printf("Enter position to delete: "); // Input the position of element to delete
    scanf("%d", &pos);
    for (i = pos - 1; i < n - 1; i++) // Shift elements left from the given position
    {
        arr[i] = arr[i + 1];
    }
    n--; // Reduce size of array as one element is deleted
    printf("Array after deletion: ");
    for (i = 0; i < n; i++) // Display array after deletion
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
/*output: Enter position to delete: 3
Array after deletion: 10 20 40 50
*/