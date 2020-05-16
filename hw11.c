#include <stdio.h>

int main(void)
{
	int input[20] = { 0 };
	int i, j, temp, least;

	printf("20개의 수를 입력하시오 :\n");

	for (i = 0; i < 20; i++)
	{
		scanf("%d", &input[i]);

		if ((input[i] < -30) || (input[i] > 30))
		{
			printf("** -30 이상 30 이하인 수를 입력하시오 **\n");
			scanf("%d", &input[i]);
		}
	}


	for (i = 0; i < 19; i++)
	{
		least = i;

		for (j = i + 1; j < 20; j++)
			if (input[j] < input[least])
				least = j;

		temp = input[i];
		input[i] = input[least];
		input[least] = temp;
	}

	printf("최대합 : %d\n", input[18] + input[19]);
	printf("두 수 : %d, %d\n", input[18], input[19]);

	return 0;

}