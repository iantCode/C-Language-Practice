#include <stdio.h>

#define NUM_DAYS 365  //기호적 상수 (매크로라고 부르기도 함.)
//보통 array의 크기를 define으로 정의한다.

int main()
{
    char my_chars[] = "Hello, World!";

    int daily_temperature[NUM_DAYS];
    double stock_price_history[NUM_DAYS];

    printf("%zd\n", sizeof(stock_price_history));
    printf("%zd\n", sizeof(double) * NUM_DAYS);
    printf("%zd\n", sizeof(stock_price_history[0]));

    int my_numbers[5];
    
    my_numbers[0] = 1;  //첫 공간이 0이다. (첫번째 주소로부터 얼마나 떨어져있는가는 offset이라고 부르기도 함.)
    my_numbers[1] = 3;
    my_numbers[2] = 4;
    my_numbers[3] = 2;
    my_numbers[4] = 5;

    printf("%d\n", my_numbers[0]);
    printf("%d\n", my_numbers[1]);
    printf("%d\n", my_numbers[2]);
    printf("%d\n", my_numbers[3]);
    printf("%d\n", my_numbers[4]);

    //scanf("%d", my_numbers); //scanf로 배열로 입력받을 수 없다.

    scanf("%d", &my_numbers[0]); //scanf로 입력받기
    scanf("%d", my_numbers);     // & 와 [0]을 빼도 첫 공간에 데이터를 입력할 수 있다.

    //런타임 에러 (실행될 때 에러가 남)
    /*
        my_numbers[5] = 10; //out of bound (Runtime error)
        my_numbers = 7;     //compile error
    */

    return 0;
}