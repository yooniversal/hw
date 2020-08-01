// final exam #2

#include <stdio.h>

int main(void)
{
	int input; // 입력값을 담을 변수

	printf("출력하고자 하는 피보나치 수열의 갯수 : ");
	scanf_s("%d", &input);

	pibo(input);

	return 0;
}

int pibo(int value)
{
	int tmp, i; // 값을 임시로 저장할 변수, 반복할 횟수를 의미하는 변수
	int a = 0; // 첫 번째 항 변수
	int b = 1; // 두 번째 항 변수

	if (value < 2)
		printf("%d ", a);
	else
		for (i = 0; i < value; i++)
		{
			printf("%d ", a);

			tmp = b; // 두 번째 항의 값을 임시로 저장
			b += a; // x1 = x1 + x0, 세 번째 항의 값을 x1에 대입
			a = tmp; // 저장했던 두 번째 항의 값을 첫 번째 항에 대입

		}
}