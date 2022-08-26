#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    int *ptr;
    ptr = (int *)malloc(sizeof(int));
    int n;
    printf("Enter Number of Elements To Put In Array: \n");
    scanf("%d", &n);
    *ptr = 0;
    int max = *(ptr);
    for (int i = 0; i < n; i++)
    {
        printf("Arr[%d]: ", i + 1);
        scanf("%d", ptr);
        if (*ptr > max)
        {
            max = *ptr;
        }
    }
    printf("Max: %d", max);
    free(ptr);
    return 0;
}