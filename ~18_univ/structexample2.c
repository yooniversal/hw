#pragma warning(disable : 4996)
#include <stdio.h>
#include <string.h>

struct info {
	char name[20];		// 이름
	int cnum;			// 전화번호
	int hnum;			// 집 전화번호
};

struct info player[5] = {
	{0},{0},{0},{0},{0},
};

int main(void)
{
	int i;
	char name[20];

	for (i = 0; i < 5; i++) {
		printf("이름을 입력하세요 : ");
		scanf("%s", &player[i].name);
		getchar();

		printf("전화번호를 입력하세요 : ");
		scanf("%d", &player[i].cnum);

		printf("집 전화번호를 입력하세요 : ");
		scanf("%d", &player[i].hnum);
	}

	printf("검색할 이름을 입력하세요 : ");
	scanf("%s", name);

	for (i = 0; i < 5; i++)
		if (strcmp(name, player[i].name) == 0)
			printf("%s의 전화번호는 %d입니다.\n", name, player[i].cnum);

	return 0;
}