#include <stdio.h>
#include <stdlib.h>

int main()
{

    const int NUM = 5;
    printf("%d\n", NUM);
    // NUM = 8; this won't work as it is a constant
    printf("%d\n", NUM);

    printf("Hello"); // This is also considered a constant as it is text on the screen and cannot be edited


    return 0;
}