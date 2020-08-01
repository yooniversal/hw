// final exam #1

#include <stdio.h>

int main(void)
{
	int height; // 행 변수 선언
	int number; // 열 변수 선언

	for (height = 0; height <= 4; height++)
	{
		for (number = 4; height < number; number--)
			printf(" "); // 공백출력
		for (number = 1; number <= height * 2 + 1; number++)
			printf("%d", number); // 숫자출력

		printf("\n");
	}

	for (height = 3; height >= 0; height--)
	{
		printf(" ");
		for (number = 3; height < number; number--)
			printf(" "); // 공백출력
		for (number = 1; number <= height * 2 + 1; number++)
			printf("%d", number); // 숫자출력

		printf("\n");
	}

	return 0;
}