#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i, j, n = 5;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }
}