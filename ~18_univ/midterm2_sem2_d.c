#include <stdio.h>

void change(int A[], int change_index, int change_value);	//index�� ���� �Լ� ����
int main(void)
{
	int number[5] = { 1, 2, 3, 4, 5 };
	int change_index;
	int change_value;
	int i;

	printf("�迭�� ���° ���ڸ� �ٲܱ�� :");
	scanf("%d", &change_index);				// index�� �Է¹޴´�

	printf("� ���ڷ� �ٲܱ�� : ");
	scanf("%d", &change_value);				// �ٲ� ���ڸ� �Է¹޴´�

	printf("�ٲٱ� ���� �迭 : ");			// �ٲٱ� �� �迭�� ����Ѵ�
	for (i = 0; i < 5; i++)
		printf("%2d ", number[i]);

	printf("\n");

	change(number, change_index, change_value);	// �Լ��� ȣ���Ͽ� ����index�� value�� �ٲ۴�

	printf("  �ٲ� ���� �迭 : ");				// for���� ���� �ٲ� ���� �迭�� ����Ѵ�
	for (i = 0; i < 5; i++)
	{
		printf("%2d ", number[i]);
	}

	printf("\n");

}

void change(int A[], int change_index, int change_value)
{
	A[change_index - 1] = change_value;
}