#include <stdio.h>

void transpose(int a[][3], int b[][3]);

int main(void)
{
	int list_a[3][3] = {
		{1,2,3},
		{4,5,6},
		{7,8,9}
	};

	int list_b[3][3], n, i, j;

	transpose(list_a, list_b);

	for (i = 0; i < 3; i++)
	{
		printf("(");
		for (j = 0; j < 3; j++)
			printf("%3d ", list_a[i][j]);

		if (i == 0)
			printf(")^r\n");
		else
			printf(")\n");
	}

	printf("RESULT IS\n");

	for (i = 0; i < 3; i++)
	{
		printf("(");
		for (j = 0; j < 3; j++)
			printf("%3d ", list_b[i][j]);
		printf(")\n");
	}

	return 0;
}

void transpose(int a[][3], int b[][3])
{
	int i, j;

	for (i = 0; i < 3; i++)
		for (j = 0; j < 3; j++)
			b[j][i] = a[i][j];

	return;
}