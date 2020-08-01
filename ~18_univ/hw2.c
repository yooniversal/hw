#include <stdio.h>

int main(void)
{
	int x, y, z;

	for (x = 1; x <= 7; x++)
	{
		for (y = 0; y <= (7 - x); y++)
		{
			printf(" ");
		}
		for (z = 1; z <= x; z++)
		{
			printf("*");
		}
		printf("\n");
	}

	return 0;
}