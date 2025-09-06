// Program using typedef and enum
#include <stdio.h>
typedef unsigned int uint;
enum week
{
    Sunday,
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday
};
int main()
{
    enum week today;
    uint num = 25;

    today = Wednesday;
    printf("Today is day number %d", today);
    printf("\nUnsigned integer = %u", num);
    return 0;
}
/*
output: Today is day number 3
Unsigned integer = 25
*/