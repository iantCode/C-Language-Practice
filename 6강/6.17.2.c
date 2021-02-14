#include <stdio.h>

#define SIZE 5

int main()
{
    int numbers[SIZE];
    int sum = 0;
    int i;

    printf("Enter %d numbers : ", SIZE);

    for (i = 0; i < SIZE; i++)
    {
        scanf("%d", &numbers[i]);
    }

    for (i = 0; i < SIZE; i++)
    {
        sum += numbers[i];
    }

    printf("Sum : %d", sum);

    return 0;
}