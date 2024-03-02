#include <stdio.h>
#include <stdlib.h>

int main()
{


    // char grade;
    // printf("Enter your grade: ");
    // scanf("%c", &grade);
    // printf("Your grade is %c\n", grade);

    // int age;
    // printf("Enter your age: ");
    // scanf("%d", &age); // when getting information from a user you have to use a pointer
    // printf("You are %d years old\n", age);

    // double gpa;
    // printf("Enter your gpa: ");
    // scanf("%lf", &gpa); // If we want to get a double we have to use %lf
    // printf("Your gpa is %f\n", gpa);

    char name[20];
    printf("Enter your name: ");
    // scanf("%s", name); // Will only grab characters up to the first space
    fgets(name, 20, stdin); // This is better for getting strings
    printf("Your name is %s", name);



    return 0;
}