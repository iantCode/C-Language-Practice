#include <stdio.h>

int main()
{
    // += -= *= /=

    int i = 100;  //아래 5개의 세트는 서로 같은 내용이다.

    i = i + 10;
    i += 10;

    i = i - 10;
    i -= 10;

    i = i * 10;
    i *= 10;

    i = i / 10;
    i /= 10;

    i = i * (1 + 2);
    i *= 1 + 2;

    // i = i + 10과 i += 10은 효율 면에서 차이가 없다.

    return 0;
}