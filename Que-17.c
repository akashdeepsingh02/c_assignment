// Program to Find Largest Element in Array
#include <stdio.h>
int main()
{
    int arr[5], i, max;
    printf("Enter 5 numbers: ");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
    max = arr[0];
    for (i = 1; i < 5; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }
    printf("Largest = %d", max);
    return 0;
}
/*output: Enter 5 numbers: 10 20 5 30 15
Largest = 30
*/