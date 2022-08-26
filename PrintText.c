#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    char *ptr;
    ptr = (char *)malloc(sizeof(char));
    int i;
    for (i = 0; *(ptr + i - 1) != '\n'; i++)
    {
        *(ptr + i) = getc(stdin);
        realloc(ptr, (i + 2) * sizeof(char));
    }
    *(ptr + i) = '\0';
    printf("%s", ptr);
    free(ptr);

    return 0;
}