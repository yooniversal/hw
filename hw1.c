#include <stdio.h>

int main(void)
{
	int number;
	int sum = 0;

	printf("�����Է��ϼ���:");

	while (scanf("%d", &number) != EOF)
	{
		sum += number;
	}

	printf("������ ����: %d �Դϴ�.\n", sum);

	return 0;
}