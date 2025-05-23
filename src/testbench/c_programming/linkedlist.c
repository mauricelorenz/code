#include <stdio.h>
#include <stdlib.h>

typedef struct sllist
{
    int number;
    struct sllist *next;
} sllnode;

sllnode* create(int number);

int main (void)
{
    sllnode myNode = create(5);
    printf("%i\n",myNode->number);
}

sllnode* create(int number)
{
    sllnode* new = malloc(sizeof(sllnode));
    if (new != NULL)
    {
        new->number = number;
        return new;
    }
    return NULL;
}