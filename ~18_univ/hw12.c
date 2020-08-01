// 플레이어마다 주사위를 던져서 다음와 같은 상금을 받음
// 같은 눈 3개 : 10000 + (같은 눈)*1000원
// 같은 눈 2개 : 1000 + (같은 눈)*100원
// 모두 다른 눈 : (가장 큰 눈)*100원
// N명(2<=N<=100) 참여 가능, 가장 많은 상금을 받는 사람의 상금 출력
#pragma warning(disable : 4996)
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int player[100] = { 0 }; // 플레이어가 받을 상금
	int input, i, j, temp, least;
	int value[3] = { 0 }; // 플레이어가 갖게 되는 주사위 눈 3개

	printf("참여할 사람 수(2이상 100이하) 입력 :");
	scanf("%d", &input);

	while ((input < 2) || (input > 100)) {
		printf("2이상 100 이하의 수를 입력하시오 :");
		scanf("%d", &input);
	}

	srand((unsigned)time(NULL));
	for (i = 0; i < input; i++) {
		for (j = 0; j < 3; j++) {
			value[j] = rand() % 6 + 1;
		}

		// 상금 조건 판단
		if ((value[0] == value[1]) && (value[0] == value[2]))
			player[i] = 10000 + value[0] * 1000;
		else if ((value[0] == value[1]) && (value[0] != value[2]))
			player[i] = 1000 + value[0] * 100;
		else if ((value[1] == value[2]) && (value[0] != value[1]))
			player[i] = 1000 + value[1] * 100;
		else if ((value[0] == value[2]) && (value[0] != value[1]))
			player[i] = 1000 + value[2] * 100;
		else if ((value[0] != value[1]) && (value[1] != value[2]) && (value[0] != value[2])) {
			if ((value[0] >= value[1]) && (value[0] >= value[2]))
				player[i] = value[0] * 100;
			else if ((value[1] >= value[0]) && (value[1] >= value[2]))
				player[i] = value[1] * 100;
			else if ((value[2] >= value[0]) && (value[2] >= value[1]))
				player[i] = value[2] * 100;
		}
	}

	for (i = 0; i < input; i++)
		printf("플레이어 %d의 상금은 %d\n", i + 1, player[i]);

	// 플레이어별 상금 오름차순 정렬
	for (i = 0; i < input - 1; i++) {
		least = i;

		for (j = i + 1; j < input; j++)
			if (player[j] < player[least])
				least = j;

		temp = player[i];
		player[i] = player[least];
		player[least] = temp;

	}

	printf("가장 많이 받은 사람의 상금은 %d\n", player[input - 1]);

	return 0;
}