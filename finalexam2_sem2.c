#include <stdio.h>
#define SIZE 20

struct info {
	char name[10];	// 이름
	char num[15];	// 번호
	char addr[20];	// 주소
	char birth[10]; // 생일
	int check;		// 주소록 존재여부, 0이면 없고 1이면 있는걸로 처리
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

		printf("이용할 메뉴를 선택하세요 : ");
		scanf("%d", &type);

		switch (type) {
		case 1:
			for (i = 0; i < SIZE; i++) {
				if (people[i].check == 1) {
					printf("이름 :%s 전화번호 : %s 주소 : %s 생일 : %s\n", people[i].name, people[i].num, people[i].addr, people[i].birth);

				}
			}
			break;
			if ((people[0].check == 0) && (people[1].check == 0) && (people[2].check == 0) && (people[3].check == 0) && (people[4].check == 0)
				&& (people[5].check == 0) && (people[6].check == 0) && (people[7].check == 0) && (people[8].check == 0) && (people[9].check == 0)
				&& (people[10].check == 0) && (people[11].check == 0) && (people[12].check == 0) && (people[13].check == 0) && (people[14].check == 0)
				&& (people[15].check == 0) && (people[16].check == 0) && (people[17].check == 0) && (people[18].check == 0) && (people[19].check == 0)) {
				printf("등록된 주소록이 없습니다.\n");
				break;
			}
			break;
		case 2:
			for (i = 0; i < SIZE; i++) {
				if (people[i].check == 0) {
					printf("추가할 이름 : ");
					scanf("%s", &people[i].name);

					printf("추가할 전화번호 : ");
					scanf("%s", &people[i].num);

					printf("추가할 주소 : ");
					scanf("%s", &people[i].addr);

					printf("추가할 생일 : ");
					scanf("%s", &people[i].birth);

					people[i].check = 1;
					printf("------ 추가 완료 ------\n");
					break;
				}
			}
			break;
		case 3:
			printf("검색할 이름 : ");
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
			printf("삭제할 이름 : ");
			scanf("%s", &search);
			for (i = 0; i < SIZE; i++) {
				for (j = 0; j < 10; j++) {
					if (search[j] == people[i].name[j]) {
						people[i].check = 0;
					}
				}
				printf("삭제 완료!\n");
				break;
			}
			break;
		case 5:
			printf("종료 되었습니다.\n");
			exit(1);
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