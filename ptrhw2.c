#include <stdio.h>

void get_sum_diff(int x, int y, int* p_sum, int* p_diff);
int main(void)
{
	int v1, v2; // value1, value2
	int* sum, * diff = NULL; // 합, 차

	printf("값을 입력하시오 : ");
	scanf_s("%d %d", &v1, &v2);

	get_sum_diff(v1, v2, &sum, &diff);

	printf("sum = %d diff = %d\n", sum, diff);

	return 0;
}

void get_sum_diff(int x, int y, int* p_sum, int* p_diff)
{
	*p_sum = x + y;

	if (x > y)
		*p_diff = x - y;
	else if (x < y)
		*p_diff = y - x;
	else *p_diff = 0;

}