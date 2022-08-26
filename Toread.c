#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    char *ptr;
    int n;
    printf("Enter How Many Elements you have to store in your array: ");
    scanf("%d", &n);
    ptr = (char *)calloc(n, n * sizeof(char));
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        printf("array[%d]: ", i + 1);
        scanf("%d", ptr + i);
        sum += *(ptr + i);
    }
    printf("Sum of %d is %d", n, sum);
    free(ptr);
    return 0;
}