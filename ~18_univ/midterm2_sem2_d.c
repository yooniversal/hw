#include <stdio.h>

void change(int A[], int change_index, int change_value);	//index에 값을 함수 설정
int main(void)
{
	int number[5] = { 1, 2, 3, 4, 5 };
	int change_index;
	int change_value;
	int i;

	printf("배열의 몇번째 숫자를 바꿀까요 :");
	scanf("%d", &change_index);				// index를 입력받는다

	printf("어떤 숫자로 바꿀까요 : ");
	scanf("%d", &change_value);				// 바꿀 숫자를 입력받는다

	printf("바꾸기 전의 배열 : ");			// 바꾸기 전 배열을 출력한다
	for (i = 0; i < 5; i++)
		printf("%2d ", number[i]);

	printf("\n");

	change(number, change_index, change_value);	// 함수를 호출하여 받은index에 value를 바꾼다

	printf("  바뀐 후의 배열 : ");				// for문을 돌려 바꾼 후의 배열을 출력한다
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