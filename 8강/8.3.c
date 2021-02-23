#include <stdio.h>

int main()
{
    //출력
    //printf("I love apple\n");  // ./8.3 > output.txt 로 실행하면 output.txt 파일로 출력할 수 있다.
    //./8.3 >> output.txt 로 실행하면 그 파일의 다음 줄부터 출력한다.

    //입력   ./8.3 < input.txt 로 실행하면 입력을 대체할 수 있다.
    //  ./8.3 | 8.3 으로 작성하면 8.3의 실행 결과가 8.3 프로그램으로 다시 넘어간다.
    char str[100];
    scanf("%s", str);
    printf("I love %s\n", str);

    return 0;
}