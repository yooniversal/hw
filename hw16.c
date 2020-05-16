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
	int r; // r�� ����(r��°)

	for (size = 1; size <= 10; size++)
		for (r = 1; r <= size; r++)		// size���� �� size��°���� ���
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

	com = pac(size) / (pac(r) * pac((size)-r)); // n��° ��, r��° ������ nCr

	return com;
}