#include <stdio.h>
#include <stdlib.h>

int main()
{

    FILE * fpointer = fopen("employees.txt", "a"); // similar to python a: append, w: write, r: read
    
    fprintf(fpointer, "\nKelly, Customer Service");

    fclose(fpointer);

    return 0;
}