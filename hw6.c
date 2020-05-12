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
			printf("(1+2+3+...+n) <= 10000 을만족하는가장큰값은%d이고그때의n값은%d이다.\n", sum - i, i - 1);
			break;
		}
	}

	return 0;
}