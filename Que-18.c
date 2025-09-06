// Program to Reverse an Array
#include <stdio.h>
int main()
{
    int arr[5], i;
    printf("Enter 5 numbers: ");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Reversed array: ");
    for (i = 4; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
/*output: Enter 5 numbers: 10 20 30 40 50
Reversed array: 50 40 30 20 10
*/