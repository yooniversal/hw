#include <stdio.h>

struct info {
	int number;			// ���
	char name[20];		// �̸�
	int phone;			// ��ȭ��ȣ
	int age;			// ����
};

typedef struct info sti; // ����ü ���� ������

sti player[10] = {
	{100, "�迵��", 01000000000, 20},
	{101, "���ϳ�", 01000000101, 34},
	{102, "��ѵ�", 01011011010, 26},
	{103, "��¼�", 01052444444, 28},
	{104, "��ݳ�", 01043256111, 33},
	{105, "��ټ�", 01457123614, 45},
	{106, "�迩��", 01047123674, 30},
	{107, "���ϰ�", 01044516234, 23},
	{108, "�迩��", 01071426512, 27},
	{109, "�迭��", 01043267715, 53},
};

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
		if ((20 <= player[i].age) && (player[i].age <= 30))
			printf("���:%d, �̸�:%s, ��ȭ��ȣ:%d, ����:%d\n",
				player[i].number, player[i].name, player[i].phone, player[i].age);

	return 0;
}