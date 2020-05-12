#include <stdio.h>

int main(void)
{
	char alpha;
	int a, b;


	printf("*****************\n");
	printf("A---- Add\n");
	printf("S---- Subtract\n");
	printf("M---- Multiply\n");
	printf("D---- Divide\n");
	printf("Q---- Quit\n");
	printf("*****************\n");

	do
	{
		printf("연산을선택하시오:");
		scanf("%c", &alpha);

		switch (alpha)
		{
		case 'A':
			printf("두수를공백으로분리하여입력하시오:");
			scanf("%d %d", &a, &b);
			printf("연산의결과는%d입니다.\n", a + b);
			break;
		case 'S':
			printf("두수를공백으로분리하여입력하시오:");
			scanf("%d %d", &a, &b);
			printf("연산의결과는%d입니다.\n", a - b);
			break;
		case 'M':
			printf("두수를공백으로분리하여입력하시오:");
			scanf("%d %d", &a, &b);
			printf("연산의결과는%d입니다.\n", a * b);
			break;
		case 'D':
			printf("두수를공백으로분리하여입력하시오:");
			scanf("%d %d", &a, &b);
			printf("연산의결과는%d입니다.\n", a / b);
			break;
		case 'Q':
			return 0;
		default:
			break;
		}

	} while (1);

	return 0;
}