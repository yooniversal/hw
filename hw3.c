#include <stdio.h>

int main(void)
{
	int x, y, number;

	printf("�������Է��Ͻÿ�:");
	scanf("%d", &number);

	for (x = 1; x <= number; x++)
	{
		for (y = 1; y <= x; y++)
			printf("%d ", y);
		printf("\n");
	}

	return 0;
}