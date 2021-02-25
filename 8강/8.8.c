#include <stdio.h>
#include <stdlib.h>

char get_choice(void);
char get_first_char(void);
int get_integer(void);
void count(void);

int main()
{
    int user_choice;

    while ((user_choice = get_choice()) != 'q')
    {
        switch (user_choice)
        {
            case 'a':
                printf("Avengers assemble!\n");
                break;
            case 'b':
                putchar('\a');
                break;
            case 'c':
                count();
                break;
            default:
                printf("Error with %d.\n", user_choice);
                exit(1);
                break;
        }
    }

    return 0;
}

char get_choice(void)
{
    printf("Enter the letter of your choice.\n");
    printf("a. avengers\tb. beep\n");
    printf("c. count\tq. quit\n");

    return get_first_char();
}

char get_first_char()
{
    char your_choice;
    while (1)
    {
        your_choice = getchar();
        while (getchar() != '\n')
            ;
        if (your_choice == 'a' || your_choice == 'b' || your_choice == 'c' || your_choice == 'q')
            return your_choice;
        else
            printf("Please try again!\n");
    }
}

int get_integer()
{
    int your_integer;

    printf("Enter an integer:\n");
    while (scanf("%d", &your_integer) != 1)
    {
        while (getchar() != '\n')
                continue;
        printf("Please enter an integer.\n");
    }
    
    return your_integer;
}

void count(void)
{
    int your_integer = get_integer();

    for (int i = 1; i <= your_integer; i++)
    {
        printf("%d\n", i);
    }
}