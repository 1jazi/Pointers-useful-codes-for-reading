#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    scanf("%d", &n);
    // int array[n];
    int *array = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        array[i] = i + 1;
    }
   // free(array);
    for (int i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }
    return 0;
}