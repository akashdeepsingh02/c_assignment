// Program for Arithmetic Operations
#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("\nAddition = %d", a + b);
    printf("\nSubtraction = %d", a - b);
    printf("\nMultiplication = %d", a * b);
    printf("\nDivision = %d", a / b);
    return 0;
}
/*output: Enter two numbers: 10 5
Addition = 15
Subtraction = 5
Multiplication = 50
Division = 2
*/
