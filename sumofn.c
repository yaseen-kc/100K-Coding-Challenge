#include <stdlib.h>
#include <stdio.h>
int main(void)
{
    int n, sum = 0, i;
    printf("Enter a Number");
    scanf("%d", &n);
    for (i = 1; i < n; i++)
    {
        sum = sum + i;
    }
    printf("%d", sum);
}