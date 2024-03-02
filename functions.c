#include <stdio.h>
#include <stdlib.h>

int main() // This is a function/ a method
{

    sayHi("Mike", 40);
    sayHi("Tom", 23);
    sayHi("Oscar", 70);

    return 0;
}

void sayHi(char name[], int age){
    printf("Hello %s, you are %d\n", name, age);
}