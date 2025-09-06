// Program to print the following pattern of * (stars) using for loop
/*
 *
 **
 ***
 ****
 *****
 */
#include <stdio.h>
int main()
{
    int i, j, n;                      // i = row counter, j = column counter, n = number of rows
    printf("Enter number of rows: "); // Step 1: Input number of rows
    scanf("%d", &n);
    for (i = 1; i <= n; i++) // Step 2: Loop through rows
    {
        for (j = 1; j <= i; j++) // Step 3: Print stars in each row
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
/*output: Enter number of rows: 5
 *  *
 * * *  *
 * * * * * *
 * * * * * * * *
 * * * * * * * * * * *
 */