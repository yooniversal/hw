#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 10

int main(void)
{
	int prices[SIZE] = { 0 };
	int i, max;

	printf("--------------------------------------\n");
	printf("1   2   3   4   5   6   7   8   9   10\n");
	printf("--------------------------------------\n");
	srand((unsigned)time(NULL));
	for (i = 0; i < SIZE; i++)
	{
		prices[i] = (rand() % 100) + 1;
		printf("%-3d ", prices[i]);
	}

	printf("\n\n");

	max = prices[0];

	for (i = 1; i < SIZE; i++)
	{
		if (prices[i] > max)
			max = prices[i];
	}
	printf("�ִ밪��%d�Դϴ�.\n", max);

	return 0;
}