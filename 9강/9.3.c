#include <stdio.h>

int int_min(int, int);

int main()
{
    int i1, i2;

    while (1)
    {
        printf("Input two integers : ");
        
        if (scanf("%d %d", &i1, &i2) != 2) break;

        int lesser = int_min(i1, i2);
        printf("The lesser of %d and %d is %d\n", i1, i2, lesser);
    }
    printf("End\n");

    return 0;
}

//정수형 반환 자료형은 생략할 수는 있다. (int)
//다만 생략하지 않는 것을 권장한다.
int_min(int i, int j)
{
    int min;
    
    //코딩 방법1
    if (i < j)
        min = i;
    else
        min = j;
    return min;

    //코딩 방법2
    return (i < j) ? i : j;

    return (float)min; //float로 바꾸어도 함수는 int형으로 변환해서 리턴한다.

    //코딩 방법3
    if (i < j)
        return i;
    else
        return j;

    return;  //값 없이 리턴하기
}