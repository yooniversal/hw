// �÷��̾�� �ֻ����� ������ ������ ���� ����� ����
// ���� �� 3�� : 10000 + (���� ��)*1000��
// ���� �� 2�� : 1000 + (���� ��)*100��
// ��� �ٸ� �� : (���� ū ��)*100��
// N��(2<=N<=100) ���� ����, ���� ���� ����� �޴� ����� ��� ���
#pragma warning(disable : 4996)
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int player[100] = { 0 }; // �÷��̾ ���� ���
	int input, i, j, temp, least;
	int value[3] = { 0 }; // �÷��̾ ���� �Ǵ� �ֻ��� �� 3��

	printf("������ ��� ��(2�̻� 100����) �Է� :");
	scanf("%d", &input);

	while ((input < 2) || (input > 100)) {
		printf("2�̻� 100 ������ ���� �Է��Ͻÿ� :");
		scanf("%d", &input);
	}

	srand((unsigned)time(NULL));
	for (i = 0; i < input; i++) {
		for (j = 0; j < 3; j++) {
			value[j] = rand() % 6 + 1;
		}

		// ��� ���� �Ǵ�
		if ((value[0] == value[1]) && (value[0] == value[2]))
			player[i] = 10000 + value[0] * 1000;
		else if ((value[0] == value[1]) && (value[0] != value[2]))
			player[i] = 1000 + value[0] * 100;
		else if ((value[1] == value[2]) && (value[0] != value[1]))
			player[i] = 1000 + value[1] * 100;
		else if ((value[0] == value[2]) && (value[0] != value[1]))
			player[i] = 1000 + value[2] * 100;
		else if ((value[0] != value[1]) && (value[1] != value[2]) && (value[0] != value[2])) {
			if ((value[0] >= value[1]) && (value[0] >= value[2]))
				player[i] = value[0] * 100;
			else if ((value[1] >= value[0]) && (value[1] >= value[2]))
				player[i] = value[1] * 100;
			else if ((value[2] >= value[0]) && (value[2] >= value[1]))
				player[i] = value[2] * 100;
		}
	}

	for (i = 0; i < input; i++)
		printf("�÷��̾� %d�� ����� %d\n", i + 1, player[i]);

	// �÷��̾ ��� �������� ����
	for (i = 0; i < input - 1; i++) {
		least = i;

		for (j = i + 1; j < input; j++)
			if (player[j] < player[least])
				least = j;

		temp = player[i];
		player[i] = player[least];
		player[least] = temp;

	}

	printf("���� ���� ���� ����� ����� %d\n", player[input - 1]);

	return 0;
}