int main(void)
{
    /*
        변수를 선언하는 방법
        자료형 변수_이름
    */

    int x; //변수 선언 (declaration)
    int y;

    x = 1;        //변수에 값 대입 (assignment)
    y = x + 1;    //y에 2 대입

    // 변수 이름 짓기

    int num_apples;
    int house;
    int friend_name;
    //int 123hello                  //변수명 앞에 숫자가 올 수 없다.
    int X;                          //변수명은 대소문자를 구분한다.
    //int x;                        //같은 변수명을 2번 선언할 필요는 없다. (Redefination)
    //int tax rate;                 //변수명에 띄어쓰기를 사용할 수 없다.
    //int rainy-days;               //변수명에 '-'를 쓸 수 없다.
    //int int;                      //변수명에 특수한 단어는 사용할 수 없다.
    int abcdefghijklmnopqrstuvwxyz; //변수명은 63자까지 가능하긴 하다.

    int a, b, c;         //한번에 여러 변수를 선언할 수 있다. 다만 전부 같은 자료형이어야만 한다.
    int p = 1, q = 2;    //한번에 여러 변수를 선언할 때 한번에 초기화도 가능하다.

    return 0;
}