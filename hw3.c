#include <stdio.h>

int main(void)
{
	int x, y, number;

	printf("정수를입력하시오:");
	scanf("%d", &number);

	for (x = 1; x <= number; x++)
	{
		for (y = 1; y <= x; y++)
			printf("%d ", y);
		printf("\n");
	}

	return 0;
}