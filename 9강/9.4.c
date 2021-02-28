#include <stdio.h>

//int a; 파일 영역 변수

int int_max(int i, int j);  //declaration

int int_max(int i, int j)   //defination
{
    //a = 456;  범위 밖에 있어서 사용할 수 없음.

    int m;
    m = (i > j) ? i : j;
    return m;    
}

int main()
{
    int a;
    //m = 123;  범위 밖에 있어서 사용할 수 없음.
    
    a = int_max(1, 2);
    printf("%d\n", a);
    printf("%p\n", &a);  //&는 주소를 의미한다.

    {
        int a;  //새 변수를 선언했기 때문에 주소가 달라졌다.
        a = int_max(4, 5);

        printf("%d\n", a);
        printf("%p\n", &a);
        int b = 123;
    }

    printf("%d\n", a);  //{}를 벗어났기 때문에 이전 주소와 값이 유지된다.
    printf("%p\n", &a);

    return 0;   
}