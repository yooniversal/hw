#include <stdio.h>
#include <string.h>
#define SIZE 20

struct info {
	char name[10];	// �̸�
	char num[15];	// ��ȣ
	char addr[20];	// �ּ�
	char birth[10]; // ����
	int check;		// �ּҷ� ���翩��, 0�̸� ���� 1�̸� �ִ°ɷ� ó��
};

void menu();
int main(void) {
	int type = 0;
	char search[10];
	int i, j;
	int chsum = 0;
	int chdel = 0;

	struct info people[SIZE] = { 0 };

	menu();

	while (1) {

		printf("�̿��� �޴��� �����ϼ��� : ");
		scanf("%d", &type);
		getchar();

		switch (type) {
		case 1:
			for (i = 0; i < SIZE; i++)
				chsum += people[i].check;

			if (chsum == 0) {
				printf("��ϵ� �ּҷ��� �����ϴ�.\n");
				break;
			}
			else {
				for (i = 0; i < SIZE; i++)
					if (people[i].check == 1) {
						printf("---------------------------------\n");
						printf("�̸� : %s\n��ȭ��ȣ : %s\n�ּ� : %s\n���� : %s\n", people[i].name, people[i].num, people[i].addr, people[i].birth);
						printf("---------------------------------\n");
					}
				break;
			}
		case 2:
			for (i = 0; i < SIZE; i++) {
				if (people[i].check == 0) {
					printf("�߰��� �̸� : ");
					gets(people[i].name);

					printf("�߰��� ��ȭ��ȣ : ");
					gets(people[i].num);

					printf("�߰��� �ּ� : ");
					gets(people[i].addr);

					printf("�߰��� ���� : ");
					gets(people[i].birth);

					people[i].check = 1;
					printf("------ �߰� �Ϸ� ------\n");
					break;
				}
			}
			break;
		case 3:
			printf("�˻��� �̸� : ");
			scanf("%s", &search);
			getchar();

			for (i = 0; i < SIZE; i++) {
				if (!(strcmp(search, people[i].name))) {
					printf("---------------------------------\n");
					printf("�̸� : %s\n��ȭ��ȣ : %s\n�ּ� : %s\n���� : %s\n", people[i].name, people[i].num, people[i].addr, people[i].birth);
					printf("---------------------------------\n");
				}
				else {
					printf("��ġ�ϴ� �̸��� �����ϴ�.\n");
					break;
				}
				break;
			}
			break;
		case 4:
			printf("������ �̸� : ");
			scanf("%s", &search);

			for (i = 0; i < SIZE; i++) {
				if (!(strcmp(search, people[i].name))) {
					people[i].check = 0;
					printf("���� �Ϸ�!\n");
					break;
				}
				chdel++;
			}

			if (chdel == 20) {
				printf("��ġ�ϴ� �̸��� �����ϴ�.\n");
				break;
			}

			break;
		case 5:
			printf("���� �Ǿ����ϴ�.\n");
			return 1;
		default:
			printf("�ٽ� �Է����ּ���.\n");
			break;
		}
	}
	return 0;
}

void menu()
{
	printf("=============================================================\n");
	printf("---------------------------�ּҷ� �޴�-----------------------\n");
	printf("   1) ��Ϻ���   2) �߰�   3) �˻�   4) ����   5) ����       \n");
	printf("=============================================================\n");
}