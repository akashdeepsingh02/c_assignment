// Program to Insert Element in Array
#include <stdio.h>
int main()
{
    int a[10] = {10, 20, 30, 40, 50};
    int n = 5, i, pos, val;
    // Step1: Input position where new element will be inserted
    printf("Enter position to insert: ");
    scanf("%d", &pos);
    // Step2: Input value to insert
    printf("Enter Value to insert: ");
    scanf("%d", &val);
    // Step 3: Shift elements to the right starting from the last element
    for (i = n; i >= pos; i--)
    {
        a[i] = a[i - 1];
    }
    // Step 4: Place the new value at given position
    a[pos - 1] = val;
    n++; // Step 5: Increase array size as one element is inserted
    printf("Array after insertion: ");
    for (i = 0; i < n; i++) // Step 6: Print array after insertion
    {
        printf("%d ", a[i]);
    }
    return 0;
}
/*output: Enter position to insert: 3
Enter Value to insert: 25
Array after insertion: 10 20 25 30 40 50
*/