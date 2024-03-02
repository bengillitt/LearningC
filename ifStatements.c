#include <stdio.h>
#include <stdlib.h>

// Logical Operators: && = and, || = or

int bigger(int num1, int num2, int num3)
{
    int result;
    if (num1 >= num2 && num1 >= num3) {
        result = num1;
    } else if (num2 >= num1 && num2 >= num3)
    {
        result = num2;
    } else {
        result = num3;
    }
    
    return result;
}

int main()
{

    printf("%d\n", bigger(1, 4, 3));

    if ( 3 > 2 || 2 > 5) {
        printf("True");
    } else {
        printf("False");
    }

    return 0;
}