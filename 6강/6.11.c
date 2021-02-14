#include <stdio.h>

int main(void)
{
    for (int n = 1, nSquare = n * n; n < 10; n++, nSquare = n * n)
        printf("%d %d\n", n, nSquare);
    
    //단 여러 변수를 한번에 선언할 때 다른 자료형을 , 을 사용해서 선언할 수 없다.
    //for 문 안에 update 부분에 2개 이상의 코드를 수행할 수 있다.

    //단 printf()에 있는 , 는 분리하는 역할을 담당한다.

    int i, j;
    i = 1;
    i++, j = 1;    // , 는 Sequence point(;와 역할) 이다.
    printf("%d %d\n", i, j);

    int x, y, z;
    z = x = 1, y = 2;
    printf("x: %d  y: %d  z:%d\n", x, y, z);

    z = (x = 1), (y = 2); //위와 동일한 순서
    printf("x: %d  y: %d  z:%d\n", x, y, z);

    z = ((x = 1), (y = 2)); //위와 동일한 순서
    printf("x: %d  y: %d  z:%d\n", x, y, z);

    //int my_money = 123,456 (불가능!)
    int my_money = (123, 456);
    printf("%d\n", my_money); //456 출력

    return 0;
}