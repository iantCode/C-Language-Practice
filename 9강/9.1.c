#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define WIDTH   20
#define NAME    "iant"
#define ADDRESS "Seoul, Korea"

void printChar(int num_stars, char print_char, bool print_newline)
{
    for (int i = 0; i < num_stars; i++)
    {
        printf("%c", print_char);
    }
    if (print_newline)
        printf('\n');
}

void printCenterString(char str[])
{
    int n_blanks = (WIDTH - strlen(str)) / 2; //defined in string.h
    printChar(n_blanks, ' ', false);
    printf("%s\n", str);
}

int main()
{
    printChar(WIDTH, '*', true);
    printf("\n");

    printCenterString(NAME);
    printCenterString(ADDRESS);

    printChar(WIDTH, '*', true);
    printf('\n');

    return 0;
}