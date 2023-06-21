#include <stdlib.h>
#include <stdio.h>
int main(void)
{
    float result, mark;
    printf("Mark: ");
    scanf("%f", &mark);
    if (mark <= 100 && mark >= 90)
    {
        printf("A Grade");
    }
    else if (mark <= 89 && mark >= 80)
    {
        printf("B Grade");
    }
    else if (mark <= 79 && mark >= 70)
    {
        printf("C Grade");
    }
    else if (mark <= 69 && mark >= 60)
    {
        printf("D Grade");
    }
    else if (mark <= 59 && mark >= 50)
    {
        printf("E Grade");
    }
    else if (mark < 50)
    {
        printf("Failed");
    }
    else
    {
        printf("Wrong Input");
    }
}