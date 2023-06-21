#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a[5], i, sum = 0;
    printf("Enter Elements:\n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < 5; i++)
    {
        sum = sum + a[i];
    }
    printf("Sum:%d", sum);
}