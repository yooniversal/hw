#pragma warning(disable : 4996)
#include <stdio.h>

struct shape {
	int type;		// 도형의 종류를 나타냄
	union {									// 공용체
		struct { int base, height; } tri;		// 삼각형 데이터
		struct { int width, height; } rect;	// 사각형 데이터
		struct { int radius; } circ;			// 원 데이터
	} data;
};

int main(void) {

	int type;
	struct shape a;

	printf("도형의 종류를 입력하시오(1:삼각형 2:사각형 3:원): ");
	scanf("%d", &type);

	if (type == 1) {
		printf("삼각형의 밑변과 높이를 입력하시오:");
		scanf("%d %d", &a.data.tri.base, &a.data.tri.height);
	}
	else if (type == 2) {
		printf("사각형의 밑변과 높이를 입력하시오:");
		scanf("%d %d", &a.data.rect.width, &a.data.rect.height);
	}
	else if (type == 3) {
		printf("원의 반지름을 입력하시오:");
		scanf("%d", &a.data.circ.radius);
	}
	else
		printf("값이 잘못되었습니다.\n");

	return 0;
}
