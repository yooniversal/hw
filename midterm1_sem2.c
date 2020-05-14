#include <stdio.h>

void swap(double* a, double* b);
int main(void)
{
	double A[2][2] = {
		{ 3, 1 },
		{ 4, 2 },
	};
	int i, j;
	double scalar;

	scalar = 1 / (A[0][0] * A[1][1] - A[0][1] * A[1][0]); // 1/(ad-bc)

	swap(&A[0][0], &A[1][1]);

	A[0][1] *= (-1);
	A[1][0] *= (-1);

	for (i = 0; i < 2; i++)
		for (j = 0; j < 2; j++)
			A[i][j] *= scalar;

	for (i = 0; i < 2; i++) {
		for (j = 0; j < 2; j++)
			printf("%.2lf ", A[i][j]);
		printf("\n");
	}

	return 0;
}

void swap(double* a, double* b) // 값을 서로 바꿔주는 함수
{
	double tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}