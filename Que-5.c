// Program with Conditional Compilation
#include <stdio.h>
#define SHOW
int main()
{
#ifdef SHOW
    printf("This message is printed because SHOW is defined.");
#endif
    return 0;
}
/*
output: This message is printed because SHOW is defined.
*/
