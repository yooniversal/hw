//Combination

#include <stdio.h>

int combi(int n, int r);

int main(void)
{

	int n, r;

	printf("n��r�����Է��Ͻÿ�:");
	scanf("%d %d", &n, &r);

	printf("C(%d, %d)��%d�Դϴ�.\n", n, r, combi(n, r));


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
