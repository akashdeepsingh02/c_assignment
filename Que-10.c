// Program to Find Factorial of a number using while loop
#include <stdio.h>
int main()
{
    int n, fact = 1;
    printf("Enter a number: ");
    scanf("%d", &n);
    while (n > 0)
    {
        fact = fact * n;
        n--;
    }
    printf("Factorial = %d", fact);
    return 0;
}
/*output: Enter a number: 5
Factorial = 120
*/