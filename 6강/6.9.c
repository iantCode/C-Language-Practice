#include <stdio.h>

int main()
{
    /*
        for(initialize; test; update)
            statement
    */

    for (int i = 10; i > 0; i--)
        printf("%d\n", i);

    printf("\n");

    for (char c = 'A'; c <= 'Z'; c++)
        printf("%c", c);
    
    for (int i = 0; i * i < 10; i++) //복잡한 코드
        printf("%d ", i);

    printf("\n");
    
    for (int x = 1, y = 5; y <= 20; y = (++x * 3) + 10) //여러 개의 변수를 한번에 초기화도 가능함.
        printf("%d\n", x);

    for (double d = 100.0; d < 300; d = d + 10)
        printf("%f\n", d);

    int i, n;
    n = 2;
    for (i = 2; n < 10; ) //한 칸을 빈 칸으로 두어도 된다.
    {
        n = n * i;
        printf("%d\n", n);
    }

    for ( ; ; )    //equivalent to while (1)
        printf("Hello, World!");

    int i = 0;
    for(printf("Enter 0"); i != 0; scanf("%d", &i))  //복잡하게 코딩할 수는 있는데 권장하지는 않음.
        ; //null statement
    
}