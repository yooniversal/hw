#include <stdio.h>

int main(void)
{
	int i = 1;
	int sum = 0;

	while (1)
	{
		sum += i;

		i++;

		if (sum > 10000)
		{
			printf("(1+2+3+...+n) <= 10000 �������ϴ°���ū����%d�̰�׶���n����%d�̴�.\n", sum - i, i - 1);
			break;
		}
	}

	return 0;
}