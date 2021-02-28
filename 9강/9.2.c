#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define WIDTH   20
#define NAME    "iant"
#define ADDRESS "Seoul, Korea"

//최신 코딩은 블랙박스 코딩 방식을 사용한다

//옛날에는 Prototype에 매개변수를 넣지 않아도 상관없었다. 지금도 가능하지만 권장하지 않음.
//Prototype에는 변수 이름을 작성하지 않아도 상관은 없다.
//다만 변수명을 입력하는 것을 권장한다.
void printChar(int, char, bool);  //Prototype 정의는 아래에
void printCenterString(char[]);

int main()
{
    printChar(WIDTH, '*', true);  // Actual (Argument/parameter) 함수에는 값으로 넣는다.
    printf("\n");

    printCenterString(NAME);
    printCenterString(ADDRESS);

    printChar(WIDTH, '*', true);
    printf('\n');

    return 0;
}

void printChar(int num_stars, char print_char, bool print_newline)  // Formal (argument/Parameter)
{
    for (int i = 0; i < num_stars; i++)
    {
        printf("%c", print_char);
    }
    if (print_newline)
        printf('\n');
}

void printCenterString(char str[])
{
    int n_blanks = (WIDTH - strlen(str)) / 2; //defined in string.h
    printChar(n_blanks, ' ', false);
    printf("%s\n", str);
}