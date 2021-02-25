#include <stdio.h>

int main()
{
    // your input is Hello 123 3.14
    char str[255];
    int i, i2;
    double d;

    scanf("%s %d %lf", str, &i, &d);
    printf("%s %d %f", str, i, d);

    //or (see the differences)

    scanf("%s %d %d", str, &i, &i2);
    printf("%s %d %d", str, i, i2);

    //or

    char c;
    while ((c = getchar()) != '\n')
        putchar(c);
    printf("\n");

    /*
    결론적으로 모든 입력은 문자로 받는다.
    이후 함수에서 분석을 해서 끊어주고, 받아주는 것을 중단하기도 한다.
    */

    return 0;
}