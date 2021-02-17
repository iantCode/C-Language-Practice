#include <stdio.h>

int main()
{
    /*
        if (expression)
        {
            Statement
        }
        if expression is not false -> Statement
    */

    int number;

    printf("Input a positive integer : ");

    scanf("%d", &number);

    if (number % 2 == 0)
        printf("Even\n");
    
    else //if (number % 2 != 0) 또는 if (number % 2 == 1) 도 가능
        printf("Odd\n");

    return 0;
}