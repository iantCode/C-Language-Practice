#include <stdio.h>
//6.1.c와 내용은 같습니다.

int main(void)
{
    int num = 0, sum = 0;

    printf("Enter an integer (q to quit) : ");

    while (scanf("%d", &num) == 1)
    {
        sum = sum + num;

        printf("Enter next integer (q to quit) : ");
    }

    printf("Sum = %d\n", sum);

    return 0;
}