#include <stdio.h>
#define SIZE 4

void merge(int* A, int* B, int* C, int size);
int main(void)
{
	int A[SIZE] = { 2, 5, 7, 8 };
	int B[SIZE] = { 1, 3, 4, 6 };
	int C[SIZE * 2];
	int index;

	merge(A, B, C, SIZE);

	for (index = 0; index < SIZE * 2; index++)
		printf("%d ", C[index]);

	printf("\n");

	return 0;
}

void merge(int* A, int* B, int* C, int size)
{
	int i = 0;
	int j = 0;
	int k = 0;

	while ((i != size) && (j != size))
	{
		if (A[i] < B[j])
		{
			C[k] = A[i];
			i++;
			k++;
		}
		else if (A[i] > B[j])
		{
			C[k] = B[j];
			j++;
			k++;
		}
	}

	if (i == size)
	{
		for (; j < size; j++)
		{
			C[k] = B[j];
			k++;
		}
	}
	else if (j == size)
	{
		for (; i < size; i++)
		{
			C[k] = A[i];
			k++;
		}
	}
}