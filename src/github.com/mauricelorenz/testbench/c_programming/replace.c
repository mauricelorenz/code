#include <stdio.h>
#include <string.h>

void replace(char origin[], char repl[], char result[]);

int main ()
{
    char origin[] = "Hallo Welt";
    char repl[] = "Geld";
    char result[20];

    replace(origin,repl,result);
    //printf("%c", result[0]);
}

void replace(char origin[], char repl[], char result[])
{
    int len = strlen(origin);
    printf("%i\n",len);
    return;
    //for (int i = 0, )
}