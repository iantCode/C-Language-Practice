#include <stdio.h>

int main(void)
{
    int num = 0, sum = 0;
    int status;

    printf("Enter an integer (q to quit) : ");
    status = scanf("%d", &num);
    /* scanf 의 리턴값은 성공적으로 입력된 변수의 갯수이므로
    q를 입력받았다면 q는 정수가 아니기 때문에 변수에 입력이 되지 않아 scanf의 리턴값은 0이 된다.
    한편 숫자를 입력받았다면 변수에 정상적으로 입력이 되기 때문에 scanf의 리턴값은 1이다. */

    while (status == 1)
    // 이때 status == 1 이 참이라면 값이 1이 된다. 거짓이라면 값이 0이 된다.
    { // 블럭
        sum = sum + num;

        printf("Enter next integer (q to quit) : ");
        status = scanf("%d", &num);
    }

    printf("Sum = %d\n", sum);

    return 0;
}