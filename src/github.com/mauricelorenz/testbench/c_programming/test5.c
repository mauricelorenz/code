#include <stdio.h>

int main (void)
{
    typedef struct
    {
        char name[50];
        int age;
    }person;

    person kurt, dieter, antonia;

    kurt.age = 32;

    printf("Alter: %i\n",kurt.age);
}