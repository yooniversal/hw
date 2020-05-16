#include <stdio.h>

void pascaltriangle(int(*p)[10], int size);
void triangleprint(int(*p)[10], int size);
int com(int size, int r);
int pac(int n);
int main(void)
{
	int pascal[10][10] = {
		{ 0 },{ 0 },{ 0 },{ 0 },{ 0 },{ 0 },{ 0 },{ 0 },{ 0 },{ 0 },
	};

	pascaltriangle(pascal, 10);

	triangleprint(pascal, 10);

	return 0;
}

int pac(int n)
{
	int i;
	int pactorial = 1;

	for (i = 1; i <= n; i++)
		pactorial *= i;

	return pactorial;
}

void pascaltriangle(int(*p)[10], int size)
{
	int r; // r은 순서(r번째)

	for (size = 1; size <= 10; size++)
		for (r = 1; r <= size; r++)		// size행일 때 size번째까지 출력
			p[size][r] = com(size - 1, r - 1);
}

void triangleprint(int(*p)[10], int size)
{
	int r;

	for (size = 1; size <= 10; size++) {
		for (r = 1; r <= size; r++)
			printf("%d ", p[size][r]);
		printf("\n");
	}
}

int com(int size, int r)
{
	int com;

	com = pac(size) / (pac(r) * pac((size)-r)); // n번째 행, r번째 순서인 nCr

	return com;
}