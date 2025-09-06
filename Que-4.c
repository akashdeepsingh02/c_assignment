// Program to Demonstrate Type Casting
#include <stdio.h>
int main()
{
    int a, b;
    float result;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    result = (float)a / b;
    printf("Division (float result) = %f", result);
    return 0;
}
/*
output: Enter two integers: 5 2
Division (float result) = 2.500000
*/
