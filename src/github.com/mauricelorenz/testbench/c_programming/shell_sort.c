#include <stdio.h>

void shellsort(int v[], int n);

int main ()
{
    int v[] = {1,4,6,3,54,2,4,64,23,21,23,15};
    int n = 12;
    shellsort(v, n);
    
    for (int i = 0; i < n-1; i++)
    {
        printf("%i ", v[i]);
    }
    printf("\n");
}

void shellsort(int v[], int n)
{
    int gap, i, j, temp;

    for (gap = n/2; gap > 0; gap /= 2)                          // gap = 6
        for (i = gap; i < n; i++)                               // i = 12
            for (j=i-gap; j>=0 && v[j]>v[j+gap]; j-=gap)        // j = 6; true && 7 > 4
            {
                temp = v[j];        // temp = 7
                v[j] = v[j+gap];    // v[j] = 4 
                v[j+gap] = temp;    // 7
            }
}