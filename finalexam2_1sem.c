// final exam #2

#include <stdio.h>

int main(void)
{
	int input; // �Է°��� ���� ����

	printf("����ϰ��� �ϴ� �Ǻ���ġ ������ ���� : ");
	scanf_s("%d", &input);

	pibo(input);

	return 0;
}

int pibo(int value)
{
	int tmp, i; // ���� �ӽ÷� ������ ����, �ݺ��� Ƚ���� �ǹ��ϴ� ����
	int a = 0; // ù ��° �� ����
	int b = 1; // �� ��° �� ����

	if (value < 2)
		printf("%d ", a);
	else
		for (i = 0; i < value; i++)
		{
			printf("%d ", a);

			tmp = b; // �� ��° ���� ���� �ӽ÷� ����
			b += a; // x1 = x1 + x0, �� ��° ���� ���� x1�� ����
			a = tmp; // �����ߴ� �� ��° ���� ���� ù ��° �׿� ����

		}
}