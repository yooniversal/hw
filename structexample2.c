#pragma warning(disable : 4996)
#include <stdio.h>
#include <string.h>

struct info {
	char name[20];		// �̸�
	int cnum;			// ��ȭ��ȣ
	int hnum;			// �� ��ȭ��ȣ
};

struct info player[5] = {
	{0},{0},{0},{0},{0},
};

int main(void)
{
	int i;
	char name[20];

	for (i = 0; i < 5; i++) {
		printf("�̸��� �Է��ϼ��� : ");
		scanf("%s", &player[i].name);
		getchar();

		printf("��ȭ��ȣ�� �Է��ϼ��� : ");
		scanf("%d", &player[i].cnum);

		printf("�� ��ȭ��ȣ�� �Է��ϼ��� : ");
		scanf("%d", &player[i].hnum);
	}

	printf("�˻��� �̸��� �Է��ϼ��� : ");
	scanf("%s", name);

	for (i = 0; i < 5; i++)
		if (strcmp(name, player[i].name) == 0)
			printf("%s�� ��ȭ��ȣ�� %d�Դϴ�.\n", name, player[i].cnum);

	return 0;
}