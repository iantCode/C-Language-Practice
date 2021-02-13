#include <stdio.h>
#include <math.h> //fabs() 함수 사용 목적 (절대값 리턴)

int main()
{
    /*
        관계 연산자
        <       더 작은가
        <=      작거나 같은가
        ==      같은가
        >=      크거나 같은가
        >       큰가
        !=      다른가
    */

    int n  = 0;
    while (n++ < 5)
        printf("%d", n);
    
    printf("\n");

    char c = 'A';
    while (c != 'Z')
        printf("%c", c++);

    printf("\n");

    //실수 비교하기
    const double PI = 3.141592653589793;
    double guess = 0.0;

    printf("Input PI : ");
    scanf("%lf", &guess);
    //while(guess != PI)    //정밀도 관련되어 문제가 많다!
    while(fabs(guess - PI) > 0.01) //입력한 값 - 파이의 절대값이 0.01보다 크다면
    {
        printf("Try again!");
        scanf("%lf", &guess);
    }
    printf("Good!");



    return 0;
}