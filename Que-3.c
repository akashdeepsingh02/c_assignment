// Program to Calculate Area of Circle using #define
#include <stdio.h>
#define PI 3.14
int main()
{
    float r, area;
    printf("Enter radius: ");
    scanf("%f", &r);
    area = PI * r * r;
    printf("Area of Circle = %f", area);
    return 0;
}
/*
output: Enter radius: 5
Area of Circle = 78.500000
*/