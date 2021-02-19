#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

#define STOP '.'

int main()
{
    char c;
    int n_chars = 0;
    int n_lines = 1;
    int n_words = 1;
    bool word_flag = false;
    bool line_flag = false;

    printf("Enter text : \n");

    while ((c = getchar()) != STOP)
    {
        if (c == '\n')
            line_flag = true;

        else if (c == ' ')
            word_flag = true;

        else
        {
            if (line_flag == true)
                n_lines += 1;

            if (word_flag == true)
                n_words += 1;

            n_chars += 1;
            line_flag = false;
            word_flag = false;
        }
    }

    printf("Characters = %d, Words = %d, Lines = %d\n", n_chars, n_words, n_lines);

    return 0;
}