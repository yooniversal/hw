#include <stdio.h>

void get_lcm_gcd(int x, int y, int* p_lcm, int* p_gcd);
int main(void)
{
	int inp1, inp2; // 입력받을 변수
	int lcm, gcd;

	printf("값을 2개 입력하세요 : ");
	scanf_s("%d %d", &inp1, &inp2);

	get_lcm_gcd(inp1, inp2, &lcm, &gcd);

	return 0;
}

void get_lcm_gcd(int x, int y, int* p_lcm, int* p_gcd)
{

	int in1, in2, tmp;

	in1 = x;
	in2 = y;

	while (in2 != 0)
	{
		tmp = in2;
		in2 = in1 % in2;
		in1 = tmp;
	}

	*p_gcd = in1;

	*p_lcm = (x * y) / *p_gcd; // 최소 공배수

	printf("최대 공약수 : %d 최대 공배수 : %d\n", *p_gcd, *p_lcm);
}