#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    int *ptr;
    int n = 0;
    printf("Enter N: ");
    scanf("%d", &n);
    ptr = (int *)calloc(n, n * sizeof(int));
    int max = *ptr;
    int min = *ptr;

    for (int i = 0; i < n; i++)
    {
        printf("Arr[%d]: ", i + 1);
        scanf("%d", ptr + i);
    }
    max = *ptr;
    min = *ptr;
    for (int i = 0; i < n; i++)
    {
        if (max < *(ptr + i))
        {
            max = *(ptr + i);
        }
        if (min > *(ptr + i))
        {
            min = *(ptr + i);
        }
    }
    printf("Max: %d\n", max);
    printf("Min: %d\n", min);
    return 0;
}