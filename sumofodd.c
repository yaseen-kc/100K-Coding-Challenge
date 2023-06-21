#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int limit, i, sum = 0;
    printf("Enter a limit:");
    scanf("%d", &limit);
    for (i = 1; i <= limit; i++)
    {
        /* code */
        if (i % 2 != 0)
        {
            sum = sum + i;
        }
    }
    printf("%d", sum);
}