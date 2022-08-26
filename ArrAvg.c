#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    int *ptr;
    int n = 0;
    printf("Enter Array Size: ");
    scanf("%d", &n);
    ptr = (int *)calloc(n, sizeof(int)); // [1,2,3,4,5]
    if (ptr == NULL)
    {
        printf("Memory Allocation Failed");
        return 0;
    }
    printf("Size of Arr: %d\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", ptr + i);
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", *(ptr + i));
    }
    printf("\n");
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += *(ptr + i);
    }
    sum /= n;
    printf("Average: %d", sum);
    free(ptr);
    return 0;
}