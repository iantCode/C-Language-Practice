#include <stdio.h>

int main()
{
    int number;
    scanf("%d", &number);

    if (number == 1)
        printf("One\n");
    if (number == 2)
        printf("Two\n");
    if (number == 3)
        printf("Three\n");

    if (number > 5)
        if (number < 10)
            printf("Larger than 5 smaller than 10\n");
    else // (number > 5) 가 아니라 (number < 10) 과 맺어진다!
        printf("Less than or equal to 5\n");

    if (number > 5)
    {  //중괄호로 명확하게 표시하는 게 좋다!
        if (number < 10)
            printf("Larger than 5 smaller than 10\n");
        
        else
            printf("Larger than 10\n");
    }
    else 
        printf("Less than or equal to 5\n");

    return 0;
}