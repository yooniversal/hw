//permutation

#include <stdio.h>

int main(void)
{

	int n, r, i;

	int result = 1;

	printf("n과r값입력");
	scanf("%d %d", &n, &r);

	for (i = n; i >= (n - r + 1); i--)
	{
		result *= i;
	}

	printf("결과는%d 입니다.", result);

	return 0;

}