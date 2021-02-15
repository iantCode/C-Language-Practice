#include <stdio.h>

int compute_pow(const int base, const int exp);  //prototype

int main()
{
    int base, exp, result;
    result = 1;
    while (scanf("%d%d", &base, &exp) == 2)
    {
        /*
            for (i = 0; i < exp; i++)
            {
                result *= base;
            }
        */
        result = compute_pow(base, exp);

        printf("Result = %d\n", result);
    }

    return 0;
}

int compute_pow(const int base, const int exp)
{
    int result = 1;
    for (int i = 0; i < exp; i++)
    {
        result *= base;
    }
    return result;
}