#include <stdio.h>

int main()
{
    int c;

    while ((c = getchar()) != EOF) //End of file = -1
    {
        putchar(c);
    }

    // stream
    while (1)
    {
        c = getchar();
        printf("%d\n", c);
        if (c == EOF)
            break;
    }

    return 0;
}