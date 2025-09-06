// Program to Find Sum of Array Elements
#include <stdio.h>
int main()
{
    int arr[5], i, sum = 0;
    printf("Enter 5 numbers: ");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    printf("Sum = %d", sum);
    return 0;
}
/*output: Enter 5 numbers: 10 20 30 40 50
Sum = 150
*/