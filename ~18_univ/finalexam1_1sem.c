// final exam #1

#include <stdio.h>

int main(void)
{
	int height; // �� ���� ����
	int number; // �� ���� ����

	for (height = 0; height <= 4; height++)
	{
		for (number = 4; height < number; number--)
			printf(" "); // �������
		for (number = 1; number <= height * 2 + 1; number++)
			printf("%d", number); // �������

		printf("\n");
	}

	for (height = 3; height >= 0; height--)
	{
		printf(" ");
		for (number = 3; height < number; number--)
			printf(" "); // �������
		for (number = 1; number <= height * 2 + 1; number++)
			printf("%d", number); // �������

		printf("\n");
	}

	return 0;
}