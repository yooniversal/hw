//mid sort with tree
#include <stdio.h>

void main(void)
{
    int i;
    int j;

    for (i = 0; i <= 3; i++)
    {
        // �������
        for (j = 3; j > i; j--)
            printf(" ");
        //*ǥ���
        for (j = 1; j <= i * 2 + 1; j++)
            printf("*");

        printf("\n");
    }
}
