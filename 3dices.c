// when use 3 dices, number of cases that add result is 10

#include <stdio.h>

int main(void)
{
	int a, b, c;

	for (a = 1; a <= 6; a++)
	{
		for (b = 1; b <= 6; b++)
		{
			for (c = 1; c <= 6; c++)
			{
				if (a + b == 6)
					printf("(%d, %d, %d)\n", a, b, c);
			}
		}
	}

	return 0;
}