//permutation

#include <stdio.h>

int main(void)
{

	int n, r, i;

	int result = 1;

	printf("n��r���Է�");
	scanf("%d %d", &n, &r);

	for (i = n; i >= (n - r + 1); i--)
	{
		result *= i;
	}

	printf("�����%d �Դϴ�.", result);

	return 0;

}