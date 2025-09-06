// Program to Find Sum of Digits of number using do-while
#include <stdio.h>
int main()
{
    int n, sum = 0, digit;
    printf("Enter a number: ");
    scanf("%d", &n);
    do
    {
        digit = n % 10;
        sum += digit;
        n = n / 10;
    } while (n > 0);
    printf("Sum of digits = %d", sum);
    return 0;
}
/*output: Enter a number: 1234
Sum of digits = 10
*/