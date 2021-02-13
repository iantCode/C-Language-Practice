#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    /*
        int i;
        i = 5;
        i == 5;
        5 = i;     //Error!
        5 == i;

        while (i = 5)  // i = 5는 실제로 대입이 되며 값은 5이므로 무한루프를 한다.
        while (i == 5) // i가 5라면 다음 문장을 실행한다.
    */

    _Bool boolean_true = (1 < 2);     //C99부터 지원하기 시작함.
    _Bool boolean_false = (1 > 2);    //결국은 정수로 저장됨

    printf("True is %d\n", boolean_true);
    printf("False is %d\n", boolean_false);

    printf(boolean_true ? "True" : "False");    //true와 false로 출력하는 방법.
    printf("\n");
    printf(boolean_false ? "True" : "False");
    printf("\n");

    bool bool_true = true;      //stdbool.h 헤더파일 필요
    bool bool_false = false;

    return 0;
}