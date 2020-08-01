#include <stdio.h>

struct info {
	int number;			// 사번
	char name[20];		// 이름
	int phone;			// 전화번호
	int age;			// 나이
};

typedef struct info sti; // 구조체 선언 재정의

sti player[10] = {
	{100, "김영영", 01000000000, 20},
	{101, "김하나", 01000000101, 34},
	{102, "김둘둘", 01011011010, 26},
	{103, "김셋셋", 01052444444, 28},
	{104, "김넷넷", 01043256111, 33},
	{105, "김다섯", 01457123614, 45},
	{106, "김여섯", 01047123674, 30},
	{107, "김일곱", 01044516234, 23},
	{108, "김여덟", 01071426512, 27},
	{109, "김열열", 01043267715, 53},
};

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
		if ((20 <= player[i].age) && (player[i].age <= 30))
			printf("사번:%d, 이름:%s, 전화번호:%d, 나이:%d\n",
				player[i].number, player[i].name, player[i].phone, player[i].age);

	return 0;
}