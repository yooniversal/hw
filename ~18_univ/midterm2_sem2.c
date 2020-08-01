#include <stdio.h>

void get_gcd_lcm(int org_x, int org_y, int* gcd, int* lcm);
int main(void)
{
	int inp1, inp2; // 입력받을 변수
	int lcm, gcd;

	printf("값을 2개 입력하세요 : ");
	scanf("%d %d", &inp1, &inp2);

	get_gcd_lcm(inp1, inp2, &gcd, &lcm);

	return 0;
}

void get_gcd_lcm(int org_x, int org_y, int* gcd, int* lcm)
{

	int in1, in2, r;

	in1 = org_x;
	in2 = org_y;

	while (in2 != 0)
	{
		r = in1 % in2;
		in1 = in2;
		in2 = r;
	}

	*gcd = in1;

	*lcm = (org_x * org_y) / *gcd; // 최소 공배수

	printf("gcd = %d, lcm = %d\n", *gcd, *lcm);
}