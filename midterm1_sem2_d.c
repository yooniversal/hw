#include <stdio.h>

int main(void)
{
	char arr[20];
	int number;
	int i = 0;
	int count = 0;
	int tmp;

	printf("�������� ��ȯ�� ���ڸ� �Է� : ");
	scanf("%d", &number);

	while (1)
	{
		arr[i] = number % 2;	// �������� %2�� �迭�� �޴´�.
		number = number / 2;	// �� �� number�� /2�� �Ѵ�.
		i++;					// i�� 1������Ű��
		count++;				// ī��Ʈ�� ������Ų��.

		if (number == 0)		// ���� number/2�� �ϴٰ� 0�� ������ �� �̻� ������ �����Ƿ� 0�̸� while���� ������.
			break;
	}

	for (i = 0; i < count / 2; i++)	// �迭�� ũ���� /2 ���Ͽ� ������ �ڹٲ��ش�
	{
		tmp = arr[i];
		arr[i] = arr[count - 1 - i];
		arr[count - 1 - i] = tmp;
	}

	for (i = 0; i < count; i++)	// arr�� �迭���� ������� ����� ��
		printf("arr[%d] = %d\n", i, arr[i]);

	for (i = 0; i < count; i++)	// 2������ ������ ����Ѵ�.
		printf("%d", arr[i]);

	printf("\n");
}
