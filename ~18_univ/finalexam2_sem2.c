#include <stdio.h>
#define SIZE 20

struct info {
	char name[10];	// �̸�
	char num[15];	// ��ȣ
	char addr[20];	// �ּ�
	char birth[10]; // ����
	int check;		// �ּҷ� ���翩��, 0�̸� ���� 1�̸� �ִ°ɷ� ó��
};

void menu();
int main(void)
{
	int type = 0;
	char search[10];
	int i, j;

	struct info people[SIZE] = {
		{0}, {0}, {0}, {0}, {0}, {0}, {0}, {0}, {0}, {0}, {0}, {0}, {0}, {0}, {0}, {0}, {0}, {0}, {0}, {0}
	};

	menu();

	while (1) {

		printf("�̿��� �޴��� �����ϼ��� : ");
		scanf("%d", &type);

		switch (type) {
		case 1:
			for (i = 0; i < SIZE; i++) {
				if (people[i].check == 1) {
					printf("�̸� :%s ��ȭ��ȣ : %s �ּ� : %s ���� : %s\n", people[i].name, people[i].num, people[i].addr, people[i].birth);

				}
			}
			break;
			if ((people[0].check == 0) && (people[1].check == 0) && (people[2].check == 0) && (people[3].check == 0) && (people[4].check == 0)
				&& (people[5].check == 0) && (people[6].check == 0) && (people[7].check == 0) && (people[8].check == 0) && (people[9].check == 0)
				&& (people[10].check == 0) && (people[11].check == 0) && (people[12].check == 0) && (people[13].check == 0) && (people[14].check == 0)
				&& (people[15].check == 0) && (people[16].check == 0) && (people[17].check == 0) && (people[18].check == 0) && (people[19].check == 0)) {
				printf("��ϵ� �ּҷ��� �����ϴ�.\n");
				break;
			}
			break;
		case 2:
			for (i = 0; i < SIZE; i++) {
				if (people[i].check == 0) {
					printf("�߰��� �̸� : ");
					scanf("%s", &people[i].name);

					printf("�߰��� ��ȭ��ȣ : ");
					scanf("%s", &people[i].num);

					printf("�߰��� �ּ� : ");
					scanf("%s", &people[i].addr);

					printf("�߰��� ���� : ");
					scanf("%s", &people[i].birth);

					people[i].check = 1;
					printf("------ �߰� �Ϸ� ------\n");
					break;
				}
			}
			break;
		case 3:
			printf("�˻��� �̸� : ");
			scanf("%s", &search);
			for (i = 0; i < SIZE; i++) {
				for (j = 0; j < 10; j++) {
					if (search[j] == people[i].name[j]) {
						printf("%s %s %s %s\n", people[i].name, people[i].num, people[i].addr, people[i].birth);
					}
					break;
				}
			}
			break;
		case 4:
			printf("������ �̸� : ");
			scanf("%s", &search);
			for (i = 0; i < SIZE; i++) {
				for (j = 0; j < 10; j++) {
					if (search[j] == people[i].name[j]) {
						people[i].check = 0;
					}
				}
				printf("���� �Ϸ�!\n");
				break;
			}
			break;
		case 5:
			printf("���� �Ǿ����ϴ�.\n");
			exit(1);
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