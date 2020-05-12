//Combination

#include <stdio.h>

int combi(int n, int r);

int main(void)
{

	int n, r;

	printf("n과r값을입력하시오:");
	scanf("%d %d", &n, &r);

	printf("C(%d, %d)은%d입니다.\n", n, r, combi(n, r));


	return 0;
}

int fac(int a)
{
	int value = 1;
	int i;

	for (i = 1; i <= a; i++)
		value *= i;

	return value;
}

int combi(int n, int r)
{
	return(fac(n) / (fac(r) * fac(n - r)));
}
