//2.2 C 프로그램 훑어보기

#include <stdio.h>
//전처리기 (컴파일 하기 전에 처리한다.)

int main(void)
//main 함수의 정의 시작
{
//영역(블럭)의 시작
    int a;
    int b;
    int c;
    //변수 선언

    a = 1;
    b = 2;
    //변수에 값을 대입
    c = a + b;
    //변수에 연산 결과를 대입

    printf("Result is %i", c);
    //printf 함수 호출

    return 0;
    //결과 값을 반환
}