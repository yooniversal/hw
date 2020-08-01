#pragma warning(disable : 4996)
#include <stdio.h>

struct shape {
	int type;		// ������ ������ ��Ÿ��
	union {									// ����ü
		struct { int base, height; } tri;		// �ﰢ�� ������
		struct { int width, height; } rect;	// �簢�� ������
		struct { int radius; } circ;			// �� ������
	} data;
};

int main(void) {

	int type;
	struct shape a;

	printf("������ ������ �Է��Ͻÿ�(1:�ﰢ�� 2:�簢�� 3:��): ");
	scanf("%d", &type);

	if (type == 1) {
		printf("�ﰢ���� �غ��� ���̸� �Է��Ͻÿ�:");
		scanf("%d %d", &a.data.tri.base, &a.data.tri.height);
	}
	else if (type == 2) {
		printf("�簢���� �غ��� ���̸� �Է��Ͻÿ�:");
		scanf("%d %d", &a.data.rect.width, &a.data.rect.height);
	}
	else if (type == 3) {
		printf("���� �������� �Է��Ͻÿ�:");
		scanf("%d", &a.data.circ.radius);
	}
	else
		printf("���� �߸��Ǿ����ϴ�.\n");

	return 0;
}
