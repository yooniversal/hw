#include <stdio.h>

int main(void)
{
	int number;
	int sum = 0;

	printf("값을입력하세요:");

	while (scanf("%d", &number) != EOF)
	{
		sum += number;
	}

	printf("정수의 합은: %d 입니다.\n", sum);

	return 0;
}