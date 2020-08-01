// when use 2 dices, number of cases that add result is 6

#include <stdio.h>

int main(void)
{
	int a, b;

	for (a = 1; a <= 6; a++)
	{
		for (b = 1; b <= 6; b++)
		{
			if (a + b == 6)
				printf("(%d, %d) ", a, b);
		}
	}

	return 0;
}