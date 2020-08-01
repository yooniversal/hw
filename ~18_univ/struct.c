#include <stdio.h>

struct dbshort
{
	unsigned short upper;
	unsigned short lower;
} DBshort;

union A
{
	int ibuf;
	char ch[4];
	struct dbshort B;
};

int main(void)
{
	union A uni;

	printf("input : ");
	scanf("%d", &uni.ibuf);

	uni.B.upper = uni.ibuf;

	printf("upper 2byte : %u \n", uni.B.upper);
	printf("lower 2byte : %u \n", uni.B.lower);
	printf("upper 1byte to ASCII : %c \n", uni.ch[0]);
	printf("lower 1byte to ASCII : %c \n", uni.ch[3]);

	return 0;
}