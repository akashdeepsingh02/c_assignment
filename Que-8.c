// Program to Display Grade using Conditional Operator
#include <stdio.h>
int main()
{
    int marks;
    char grade;
    printf("Enter marks: ");
    scanf("%d", &marks);
    grade = (marks >= 50) ? 'P' : 'F';
    printf("Grade = %c", grade);
    return 0;
}
/*
output: Enter marks: 65
Grade = P
*/
