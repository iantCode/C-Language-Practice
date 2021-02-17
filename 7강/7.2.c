#include <stdio.h>  // getchar(), putchar();

int main()
{
    /*
        getchar() : 글자 하나를 가져온다.
        putchar() : 한 글자를 화면에 출력한다.
    */

    char ch;

    /*
        ch = getchar();  //buffer (여러 글자를 받고 한 글자씩 빼서 작동한다.)
        //putchar(ch);

        while (ch != '\n')
        {
            putchar(ch); // 한 글자씩 처리한다.
            ch = getchar();
        }
    */
    while ((ch = getchar()) != '\n')
    {

        //f와 F를 X로 바꾸기
        if (ch == 'f' || ch == 'F')
            ch = 'X';
        //else if (ch == 'F')
        //    ch = 'X';

        /*
            for (int i = '0'; i <= '9'; i++)
                if (ch == i)
                    ch = '*';
        */

        //숫자를 *로 바꾸기
        if (ch >= '0' && ch <= '9')
            ch = '*';

        //소문자를 대문자로 바꾸기
        if (ch >= 'a' && ch <= 'z')
            ch -= 'a' - 'A';

        //대문자를 소문자로 바꾸기
        else if (ch >= 'A' && ch <= 'Z')
            ch += 'a' - 'A';

        putchar(ch); // 한 글자씩 처리한다.
    }
    putchar(ch);

    /*
        do {
            ch = getchar();
            putchar(ch);
        } while(ch != '\n')
    */

    return 0;
}