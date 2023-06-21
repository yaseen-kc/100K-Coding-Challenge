#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int num, flag, i;
    flag=0;
    printf("Enter a number");
    scanf("%d", &num);
    for (i = 2; i < num/2; i++)
    {
        if (num % i == 0)
        {
            /* code */
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        /* code */
        printf("Prime Number");
    }
    else
    {
        printf("Not Prime");
    }
}