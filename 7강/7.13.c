#include <stdio.h>

int main()
{
    int size = 15, cost;

    if (size < 10)
        goto a;
    goto b;

a:  cost = 50 * size;
b:  cost = 100 * size;

    char c;

read: c = getchar();
    putchar(c);
    if (c == '.') goto quit;
    goto read;
quit:

    return 0;
}