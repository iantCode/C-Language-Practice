#include <stdio.h>

long get_long(void);

int main()
{
    long number;

    while (1)
    {
        printf("Please input a number between 1 and 100.");
        number = get_long();

        if (number > 1 && number < 100)
            printf("OK. Thank you.\n");
        else
            printf("Wrong input\n");
    }

    return 0;
}

long get_long(void)
{
    long input;
    char c;

    while (scanf("%ld", &input) != 1)
    {
        printf("Your input: \"");

        while ((c = getchar()) != '\n')
            putchar(c);
        printf("\" is not an integer. Please try again.\n");
    }

    return input;
}