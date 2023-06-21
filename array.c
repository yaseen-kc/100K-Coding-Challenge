#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a[100], i, limit;
    printf("Enter the limit \n");
    scanf("%d", &limit);
    printf("Enter Values \n");
    for (i = 0; i < limit; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter Values \n");
    for (i = 0; i < limit; i++)
    {
        printf("%d", a[i]);
    }
}
