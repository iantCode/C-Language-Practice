#include <stdio.h>

int main()
{
    // Indefinite loop vs Counting loop
    // Indefinate loop example
    while (1)
    {

    }

    // Counting loop example
    int i = 0;        //counter initialization

    while (i < 10)    //counter check
    {
        i++;          //counter change
    }

    for(i = 0; i < 10; i++) //위의 while 코드와 작동이 같음.
    {

    }

    for(int j = 0; j < 10; j++) //for 문 안에서 새 변수를 선언하고 사용할 수 있다.
    {

    }

    /*
        for문 작동 방식
        1. 변수 초기화
        2. 조건 확인
        3. statement 수행
        4. 변수 변화 수행
    */

    return 0;
}