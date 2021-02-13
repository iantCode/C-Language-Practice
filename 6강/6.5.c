#include <stdio.h>

int main()
{
    int a, b;
    a = (1 < 2); // True
    b = (1 > 2); // False

    printf("True is %d\n", a);     //True is 1
    printf("False is %d\n", b);    //False is 0

    int i = -5;
    while (i) //0이면 false, 나머지는 다 true
        printf("%d is true\n", i++);
    printf("%d is false\n", i);

    //while (1) //무한루프

    return 0;
}