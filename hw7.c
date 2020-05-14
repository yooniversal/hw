#include <stdio.h>

void scalar_mult(int a[][3], int scalar);

int main(void)
{
	int list[3][3] = {
		{1,2,3},
		{4,5,6},
		{7,8,9}
	};

	int n, i, j;

	printf("값을 입력하시오 :");
	scanf_s("%d", &n);



	for (i = 0; i < 3; i++)
	{
		printf("(");
		for (j = 0; j < 3; j++)
			printf("%3d ", list[i][j]);
		printf(")\n");
	}

	scalar_mult(list, n);

	printf("RESULT IS\n");

	for (i = 0; i < 3; i++)
	{
		printf("(");
		for (j = 0; j < 3; j++)
			printf("%3d ", list[i][j]);
		printf(")\n");
	}

	return 0;
}

void scalar_mult(int a[][3], int scalar)
{
	int i, j;

	for (i = 0; i < 3; i++)
		for (j = 0; j < 3; j++)
			a[i][j] *= scalar;

	return;
}