// Program to Traverse and Print Array Elements
#include <stdio.h>
int main()
{
    int arr[5], i;
    printf("Enter 5 numbers: ");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Array elements: ");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
/*output: Enter 5 numbers: 10 20 30 40 50
Array elements: 10 20 30 40 50
*/