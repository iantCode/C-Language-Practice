#include <stdio.h>

int main()
{
    // Continue
    for (int i = 0; i < 10; i++)
    {
        if (i == 5)
            continue;

        printf("%d ", i);
    }

    // Break
    for (int i = 0; i < 10; i++)
    {
        if (i == 5)
            break;

        printf("%d ", i);
    }


    int count = 0;
    while (count < 5)
    {
        int c = getchar();
        if (c == 'a')
            continue;
        putchar(c);
        count++;
    }


    // Placeholder
    while (getchar() != '\n')
        continue; //placeholder

    
    // Continue 사용할지는 선택의 문제
    char c;
    while ((c = getchar()) != '\n')
    {
        /*
        if (c == 'a')
            continue;
        putchar(c);
        */
        if (c != 'a')
            putchar(c);
    }


    //무한 반복문과 break;
    while (1)
    {
        char c = getchar();

        if (c == '.')
            break;
        
        putchar(c);
    }

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (j = 5)
                break;  //break 문은 하나만 깬다.

            printf("(%d %d)", i, j);
        }
        printf("\n");
    }

    return 0;
}