//mid sort with tree
#include <stdio.h>

void main(void)
{
    int i;
    int j;

    for (i = 0; i <= 3; i++)
    {
        // 공백출력
        for (j = 3; j > i; j--)
            printf(" ");
        //*표출력
        for (j = 1; j <= i * 2 + 1; j++)
            printf("*");

        printf("\n");
    }
}
