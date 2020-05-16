#include <stdio.h>
#include <stdlib.h>
#define SIZE 20

int main(void)
{
	int input[SIZE];
	int* p = NULL;
	int i;

	printf("문자열 입력 : ");
	scanf("%s", input);

	p = input;

	for (i = 0; i < 20; i++) {
		p = &input[i];

		if (('a' <= *p) && (*p <= 'z'))
			*p -= 32;

		if (('A' <= *p) && (*p <= 'Z'))
			*p += 32;
	}

	printf("문자열 변환 : %s\n", *p);

	return 0;
}