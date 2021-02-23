#include <stdio.h>
//#nclude <conio.h> //Windows에서만 사용 가능

int main()
{
    char c;

    while ((c = getchar()) != '.')
        putchar(c);

    return 0;
}