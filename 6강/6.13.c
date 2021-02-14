#include <stdio.h>

int main()
{
    const int secret_code = 632;
    int guess;

    /*
        printf("Enter secret code : ");
        scanf("%d", &guess);

        while (guess != secret_code)
        {
            printf("Enter secret code : ");
            scanf("%d", &guess);
        }
    */

    do //위 코드와 이 코드는 작동 원리가 같다.
    {
        printf("Enter secret code : ");
        scanf("%d", &guess);
    } while (guess != secret_code);

    printf("Good!");

    return 0;
}