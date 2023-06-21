#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    int i, j, n;
    n = 5;
    for (i = 1; i <= n; i++)
    {
        for (j = 0; j < i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}