#include <stdio.h>

int main()

{
    int x = 1;
    int y = 2;

    printf("%i %i\n", x, y);

    x, y = y, x;

    printf("%i %i\n", x, y);

    /*
    switch (x)
    {
        case 1: printf("1\n");
        break;
        case 2: printf("2\n");
        case 3: printf("3\n");
        case 4: printf("4\n");
        case 5: printf("5\n");
    }
    */
}