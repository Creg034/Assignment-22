#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    int *ptr;
    ptr = (int *)malloc(sizeof(int));
    printf("Enter N: ");
    scanf("%d", ptr);
    int sum = 0;
    for (int i = 0; i < *ptr; i++)
    {
        sum += i;
    }
    printf("Sum of %d is %d", *ptr, sum);
    free(ptr);
    return 0;
}