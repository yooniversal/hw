#include <stdio.h>

int main(void)
{
	char arr[20];
	int number;
	int i = 0;
	int count = 0;
	int tmp;

	printf("이진수로 변환할 숫자를 입력 : ");
	scanf("%d", &number);

	while (1)
	{
		arr[i] = number % 2;	// 나머지를 %2로 배열에 받는다.
		number = number / 2;	// 그 후 number에 /2를 한다.
		i++;					// i를 1증가시키고
		count++;				// 카운트도 증가시킨다.

		if (number == 0)		// 만약 number/2를 하다가 0이 나오면 더 이상 나눌수 없으므로 0이면 while문을 나간다.
			break;
	}

	for (i = 0; i < count / 2; i++)	// 배열의 크기의 /2 를하여 순서를 뒤바꿔준다
	{
		tmp = arr[i];
		arr[i] = arr[count - 1 - i];
		arr[count - 1 - i] = tmp;
	}

	for (i = 0; i < count; i++)	// arr의 배열값을 순서대로 출력한 후
		printf("arr[%d] = %d\n", i, arr[i]);

	for (i = 0; i < count; i++)	// 2진수의 값으로 출력한다.
		printf("%d", arr[i]);

	printf("\n");
}
