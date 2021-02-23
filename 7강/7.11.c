#include <stdio.h>
#include <float.h>

int main()
{
    float max = -FLT_MAX;
    float min = FLT_MIN;
    float sum = 0.0f;
    float input;
    int n = 0;

    while (scanf("%f", &input) == 1)
    {
        if (input < 0.0f) continue;

        max = (max < input) ? input : max;
        min = (min > input) ? input : min;
        sum += input;

        n++;
    }

    if (n > 0)
        printf("min = %f, max = %f, ave = %f\n", min, max, sum / n);
    else
        printf("No Input\n");

    return 0;
}