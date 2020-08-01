#include <stdio.h>
#include <string.h>
#define SIZE 20

struct info {
	char name[10];	// 이름
	char num[15];	// 번호
	char addr[20];	// 주소
	char birth[10]; // 생일
	int check;		// 주소록 존재여부, 0이면 없고 1이면 있는걸로 처리
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

		printf("이용할 메뉴를 선택하세요 : ");
		scanf("%d", &type);
		getchar();

		switch (type) {
		case 1:
			for (i = 0; i < SIZE; i++)
				chsum += people[i].check;

			if (chsum == 0) {
				printf("등록된 주소록이 없습니다.\n");
				break;
			}
			else {
				for (i = 0; i < SIZE; i++)
					if (people[i].check == 1) {
						printf("---------------------------------\n");
						printf("이름 : %s\n전화번호 : %s\n주소 : %s\n생일 : %s\n", people[i].name, people[i].num, people[i].addr, people[i].birth);
						printf("---------------------------------\n");
					}
				break;
			}
		case 2:
			for (i = 0; i < SIZE; i++) {
				if (people[i].check == 0) {
					printf("추가할 이름 : ");
					gets(people[i].name);

					printf("추가할 전화번호 : ");
					gets(people[i].num);

					printf("추가할 주소 : ");
					gets(people[i].addr);

					printf("추가할 생일 : ");
					gets(people[i].birth);

					people[i].check = 1;
					printf("------ 추가 완료 ------\n");
					break;
				}
			}
			break;
		case 3:
			printf("검색할 이름 : ");
			scanf("%s", &search);
			getchar();

			for (i = 0; i < SIZE; i++) {
				if (!(strcmp(search, people[i].name))) {
					printf("---------------------------------\n");
					printf("이름 : %s\n전화번호 : %s\n주소 : %s\n생일 : %s\n", people[i].name, people[i].num, people[i].addr, people[i].birth);
					printf("---------------------------------\n");
				}
				else {
					printf("일치하는 이름이 없습니다.\n");
					break;
				}
				break;
			}
			break;
		case 4:
			printf("삭제할 이름 : ");
			scanf("%s", &search);

			for (i = 0; i < SIZE; i++) {
				if (!(strcmp(search, people[i].name))) {
					people[i].check = 0;
					printf("삭제 완료!\n");
					break;
				}
				chdel++;
			}

			if (chdel == 20) {
				printf("일치하는 이름이 없습니다.\n");
				break;
			}

			break;
		case 5:
			printf("종료 되었습니다.\n");
			return 1;
		default:
			printf("다시 입력해주세요.\n");
			break;
		}
	}
	return 0;
}

void menu()
{
	printf("=============================================================\n");
	printf("---------------------------주소록 메뉴-----------------------\n");
	printf("   1) 목록보기   2) 추가   3) 검색   4) 삭제   5) 종료       \n");
	printf("=============================================================\n");
}