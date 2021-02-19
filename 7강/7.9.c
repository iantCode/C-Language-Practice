#include <stdio.h>
#include <stdbool.h>
// ? : Ternary Operator

int main()
{
    int temp;
    temp = true ? 1024 : 7; //1024 저장
    printf("%d\n", temp);

    temp = false ? 1024 : 7; //7 저장
    printf("%d\n", temp);

    int number;
    scanf("%d", &number);

    bool is_even;

    is_even = (number % 2) ? false : true;

    if (is_even)
        printf("Even");
    else
        printf("Odd");

    //(number % 2) ? printf("Odd") : printf("Even");  역할을 동일하게 수행함.

    int a = 1, b = 2;
    int max = (a > b) ? a : b;

    return 0;
}