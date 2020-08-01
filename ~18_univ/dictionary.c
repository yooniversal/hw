#include <stdio.h>
#include <string.h>
#pragma warning(disable : 4996)
#define ENTRIES 5

int main(void)
{
	int i, index, input;
	char dic[ENTRIES][2][30] = {
		{"book", "책"},
		{"boy", "소년"},
		{"computer", "컴퓨터"},
		{"language","언어"},
		{"rain", "비"},
	};

	char word[30];

	printf("영한사전은 1, 한영사전은 2를 입력하시오 :");
	scanf("%d", &input);

	if (input == 1)
	{
		printf("단어를 입력하시오:");
		scanf("%s", &word);

		index = 0;
		for (i = 0; i < ENTRIES; i++)
		{
			if (strcmp(dic[index][0], word) == 0)
			{
				printf("%s : %s\n", word, dic[index][1]);
				return 0;
			}
			index++; // 행 증가
		}
		printf("사전에서 발견되지 않았습니다.\n");
	}
	else if (input == 2)
	{
		printf("단어를 입력하시오:");
		scanf("%s", &word);

		index = 0;
		for (i = 0; i < ENTRIES; i++)
		{
			if (strcmp(dic[index][1], word) == 0)
			{
				printf("%s : %s\n", word, dic[index][0]);
				return 0;
			}
			index++; // 행 증가
		}
		printf("사전에서 발견되지 않았습니다.\n");
	}

	return 0;
}