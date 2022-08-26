#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    int n = 0;
    printf("Enter N: ");
    scanf("%d", &n);
    int *ptr = (int *)malloc(n);
    if (ptr == NULL)
    {
        printf("Dynamic Allocation Failed");
        return 0;
    }
    printf("Address: %d", ptr);
    return 0;
}