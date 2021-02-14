#include <stdio.h>

int main()
{
    const double speed = 1.0;

    double deltaTime = 1.0;
    double time = 0.0;
    double distance = 0.0;

    for (int i = 0; i < 10; i++)
    {
        time += deltaTime;
        distance += speed * deltaTime;

        deltaTime /= 2.0;

        printf("Elapsed time = %fs, Distance = %fm\n", time, distance);
    }

    return 0;
}