#include <stdio.h>
#include <stdlib.h>
int main()
{

    int n = 10;
    int *array = (int *)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++)
    {
        array[i] = i + 1;
        printf("%d\n", array[i]);
    }

    return 0;
}