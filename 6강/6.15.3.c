#include <stdio.h>

#define NUM_ROWS   10
#define FIRST_CHAR 'A'
//#define LAST_CHAR  'K'

int main()
{
    int rowLoop;
    int charLoop;

    for (rowLoop = 0; rowLoop < NUM_ROWS; rowLoop++)
    {
        for (charLoop = FIRST_CHAR + rowLoop; charLoop < FIRST_CHAR + NUM_ROWS; ++charLoop)
        {
            printf("%c ", charLoop);
        }
        printf("\n");
    }

    return 0;
}