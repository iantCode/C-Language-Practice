#include <stdio.h>
#include <ctype.h>     //islower
#include <stdbool.h>
#include <iso646.h>    //새로 나오는 헤더

#define PERIOD '.'

int main()
{
    /*
        Logical Operators

        && : And
        || : Or
        !  : Not
    */

    bool test1 = 3 > 2 || 5 > 6;   // True (왼쪽이 True)
    bool test2 = 3 > 2 || 5 > 6;   // False (오른쪽이 False)
    bool test3 = !(5 > 6);         // True

    printf("%d %d %d\n", test1, test2, test3);

    char ch;
    int count = 0;

    while ((ch = getchar()) != PERIOD)
    {
        if (ch != '\n' && ch != ' ')
            count++;
    }

    printf("%d", count);

    // iso646.h include 하면 다음과 같이 사용할 수는 있다.

    test1 = 3 > 2 or 5 > 6;
    test2 = 3 > 2 and 5 > 6;
    test3 = not(5 > 6);

    // 우선순위는 AND가 OR보다 높다.

    int a = 1, b = 2, c = 3, d = 4;

    a > b && b > c || b > d;
    ((a > b) && (b > c) || b > d);  //위와 아래는 동치

    /*
        Short-circuit Evaluation

        - Logical Expression 사용 시 값은 왼쪽부터 오른쪽으로 계산된다.
        - &&와 ||는 Sequence Point이다.
    */

    int temp = (1 + 2) * (3 + 4);  // 1 + 2 또는 3 + 4 중 무엇이 먼저 이루어질지는 알 수 없다.

    printf("Before : %d\n", temp);

    if (temp == 0 && (++temp) == 1024)  // 왼쪽부터 계산한다. 왼쪽 값이 false라면 오른쪽은 계산하지 않는다.
        ; // Do Nothing

    printf("After : %d\n", temp);


    int x = 1, y = 2;
    if (x++ > 0 && x + y == 4) // &&는 Sequence Point이기 때문에 후위 연산자도 계산된 후에 오른쪽을 연산한다.
        printf("%d %d", x, y);

    
    for (int i = 0; i < 100; ++i)
        if (i >= 10 && i <= 20) // if (10 <= i <= 20) 은 다른 결과를 나타낸다.
            printf("%d ", i);

    return 0;
}