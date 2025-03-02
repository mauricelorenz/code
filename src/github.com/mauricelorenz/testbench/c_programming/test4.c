#include <stdio.h>

int main()
{
    char myString [] = "Tes";
    char *myPointer = &myString[0];
    myPointer += 2;
    printf("%s\n%p\n%i\n", myString, myPointer, *myPointer);
}