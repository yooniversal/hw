#include <stdio.h>
#include <string.h>
#pragma warning(disable : 4996)
#define ENTRIES 5

int main(void)
{
	int i, index, input;
	char dic[ENTRIES][2][30] = {
		{"book", "å"},
		{"boy", "�ҳ�"},
		{"computer", "��ǻ��"},
		{"language","���"},
		{"rain", "��"},
	};

	char word[30];

	printf("���ѻ����� 1, �ѿ������� 2�� �Է��Ͻÿ� :");
	scanf("%d", &input);

	if (input == 1)
	{
		printf("�ܾ �Է��Ͻÿ�:");
		scanf("%s", &word);

		index = 0;
		for (i = 0; i < ENTRIES; i++)
		{
			if (strcmp(dic[index][0], word) == 0)
			{
				printf("%s : %s\n", word, dic[index][1]);
				return 0;
			}
			index++; // �� ����
		}
		printf("�������� �߰ߵ��� �ʾҽ��ϴ�.\n");
	}
	else if (input == 2)
	{
		printf("�ܾ �Է��Ͻÿ�:");
		scanf("%s", &word);

		index = 0;
		for (i = 0; i < ENTRIES; i++)
		{
			if (strcmp(dic[index][1], word) == 0)
			{
				printf("%s : %s\n", word, dic[index][0]);
				return 0;
			}
			index++; // �� ����
		}
		printf("�������� �߰ߵ��� �ʾҽ��ϴ�.\n");
	}

	return 0;
}