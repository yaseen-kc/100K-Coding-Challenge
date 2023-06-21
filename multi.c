#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int number, i, result;
    printf("Enter the number: ");
    scanf("%d", &number);
    for (i = 1; i <= 10; i++)
    {
        result = i * number;
        printf("%d X %d = %d \n", i, number, result);
    }
}