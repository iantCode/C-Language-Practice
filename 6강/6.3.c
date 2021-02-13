#include <stdio.h>

int main(void)
{
    /*
    while (expression) //if expression is not 0
    {
        statement
    }
    */

    int i = 0;
    while (i < 5)                    //무한 루프
        printf("Hello, World!\n");    //iteration (반복)

    i = 1;
    while (--i < 5)                  //잘못된 조건으로 인한 무한 루프 
        printf("Hello, World!\n");

    i = 1;
    while (i < 5)                    //성공적인 코드
    {
        printf("Hello, World!\n");
        i++;
    }

    i = 10;
    while (i++ < 5)                  //진입이 불가능한 while문
    {
        printf("Hello, World!\n");
    }

    i = 1;
    while (i < 5)                    //{}를 사용하지 않아 생기는 무한 루프
        printf("Hello, World!\n");
        i++;

    i = 1;
    while (i < 5); //null statement  //while 문 뒤에 ;를 작성해 Hello, World를 출력할 수 없다.
        printf("Hello, World!\n");

    /*
    while (scanf("%d", &i) == 1)     //null statement 사용 예시 (지금은 권장하지 않음)
        ;
    */

    return 0;
}