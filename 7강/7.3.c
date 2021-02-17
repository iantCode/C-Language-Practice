#include <stdio.h>
#include <ctype.h>

int main()
{
    char ch;

    while ((ch = getchar()) != '\n')
    {
        /*
        if (ch >= 'a' && ch <= 'z')
            ch -= 'a' - 'A';
        else if (ch >= 'A' && ch <= 'Z')
            ch += 'a' - 'A';
        */

        if (islower(ch))
            ch = toupper(ch);
        else if (isupper(ch))
            ch = tolower(ch);

        /*
            if (ch >= '0' && ch <= '9')
                ch = '*';
        */

        if (isdigit(ch))
            ch = '*';
        
        putchar(ch);
    }

    putchar(ch); //\n 출력

    return 0;
}