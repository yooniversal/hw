#include <stdio.h>

int main(void)
{
	int A[3][2] = {
		{ 3, 5 },
	{ 4, 2 },
	{ 5, 7 }
	};
	int B[2][3] = {
		{ 3, 8, 2 },
	{ 2, 4, 6 }
	};
	int C[3][3] = { 0 };
	int i, j, k;

	// i는 C의 행, j는 C의 열
	// A(2*3), B(3*4) 의 경우 i=2, j=4, k=3 이 된다

	for (i = 0; i < 3; i++)
		for (j = 0; j < 3; j++)
			for (k = 0; k < 2; k++)
				C[i][j] += A[i][k] * B[k][j];

	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++)
			printf("%2d ", C[i][j]);
		printf("\n");
	}

	return 0;
}