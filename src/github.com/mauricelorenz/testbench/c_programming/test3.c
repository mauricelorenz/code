#include <stdio.h>

int main()
{
    int c;
    int space_counter = 0;
    while ((c = getchar()) != EOF)
    {
        if (c != ' ')
        {
            putchar(c);
            space_counter = 0;
        } else if (c == ' ' && space_counter == 0)
        {
            putchar(c);
            space_counter++;
        }
    }
}