// Menu-driven Calculator using switch-case
#include <stdio.h>
int main()
{
    int a, b, choice;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division");
    printf("\nEnter choice: ");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        printf("Result = %d", a + b);
        break;
    case 2:
        printf("Result = %d", a - b);
        break;
    case 3:
        printf("Result = %d", a * b);
        break;
    case 4:
        printf("Result = %d", a / b);
        break;
    default:
        printf("Invalid Choice");
    }
    return 0;
}
/*output: Enter two numbers: 10 5
1. Addition
2. Subtraction
3. Multiplication
4. Division
Enter choice: 3
Result = 50
*/
