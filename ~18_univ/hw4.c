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
		printf("�����������Ͻÿ�:");
		scanf("%c", &alpha);

		switch (alpha)
		{
		case 'A':
			printf("�μ����������κи��Ͽ��Է��Ͻÿ�:");
			scanf("%d %d", &a, &b);
			printf("�����ǰ����%d�Դϴ�.\n", a + b);
			break;
		case 'S':
			printf("�μ����������κи��Ͽ��Է��Ͻÿ�:");
			scanf("%d %d", &a, &b);
			printf("�����ǰ����%d�Դϴ�.\n", a - b);
			break;
		case 'M':
			printf("�μ����������κи��Ͽ��Է��Ͻÿ�:");
			scanf("%d %d", &a, &b);
			printf("�����ǰ����%d�Դϴ�.\n", a * b);
			break;
		case 'D':
			printf("�μ����������κи��Ͽ��Է��Ͻÿ�:");
			scanf("%d %d", &a, &b);
			printf("�����ǰ����%d�Դϴ�.\n", a / b);
			break;
		case 'Q':
			return 0;
		default:
			break;
		}

	} while (1);

	return 0;
}