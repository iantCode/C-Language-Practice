#include <stdio.h>
#include <stdlib.h>

int main()
{
    int c;
    FILE *file = NULL; //*는 포인터 변수라는 뜻
    char file_name[] = "./8강/example.txt";

    file = fopen(file_name, "r"); //파일을 여는 함수 "r"는 read
    if (file == NULL)  //파일을 읽는데 실패하면 null을 저장한다.
    {
        printf("Failed to open file\n");
        exit(1);
    }

    while ((c = getc(file)) != EOF)
        putchar(c);
    
    fclose(file); //전부 사용하면 닫아준다.

    return 0;
}