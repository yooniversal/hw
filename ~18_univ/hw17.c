#include <stdio.h>

int main(void)
{
	int A[3][3] = {
		{1, 2, 3},
		{4, 5, 6},
		{7, 8, 9}
	};
	int B[3][3] = {
		{1, 2, 3},
		{4, 5, 6},
		{7, 8, 9}
	};
	int C[3][3] = { 0 };
	int i, j, k;

	// i�� C�� ��, j�� C�� ��
	// A(2*3), B(3*4) �� ��� i=2, j=4, k=3 �� �ȴ�

	for (i = 0; i < 3; i++)
		for (j = 0; j < 3; j++)
			for (k = 0; k < 3; k++)
				C[i][j] += A[i][k] * B[k][j];

	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++)
			printf("%2d ", C[i][j]);
		printf("\n");
	}

	return 0;
}