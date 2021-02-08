#include <stdio.h>
//printf는 위 헤더 파일에 정의되어 있다.

int main(void)
{
    /*
    printf("The truth is ...
    I am Ironman.");
    다음과 같이 작성할 시 오류가 발생한다. 줄바꿈을 해야 한다면 아래와 같이 작성한다. */

    printf("The truth is ... \nI am Ironman.\n");
    //\n은 Escape Sequence로 줄바꿈을 처리한다. \가 나오면 컴파일러는 다음 문자를 보고 특정한 역할을 수행한다.

    //printf(""The truth is ... \nI am Ironman.\n"");
    //따옴표 출력을 위해서는 ""를 사용할 수 없다. 사용하기 위해서는 Escape Sequence를 사용한다.

    printf("\"The truth is ... \nI am Ironman.\"\n");

    int x;
    x = 1;

    printf("The answer is x");
    //출력은 적힌 그대로 The answer is x로 나온다. 변수에 담긴 숫자를 출력하고 싶다면 다음과 같이 작성한다.

    printf("The answer is %i", 1 + 3);
    //printf에서 %d와 %i는 사용법이 동일하다. 뒤에 있는 숫자를 %i 자리에 출력시킨다.
    printf("The answer is %i", x);
    //변수도 출력이 가능하다.

    int y, z;
    y = 2;
    z = x + y;

    printf("%d + %d = %d", x, y, z);
    //printf에서 여러 개의 숫자를 넣을 수 있다.

    return 0;
}
