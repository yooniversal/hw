#include <stdio.h>

int main(void)
{
	char fir;
	int chair[10] = { 0 };
	int sec = 0;
	int i;

	while (1)
	{

		printf("�¼��������Ͻ÷���y���Է��Ͻÿ�:");
		scanf("%c", &fir);
		getchar();

		printf("\n---------------------------------\n�¼���ȣ- ");
		for (i = 0; i < 10; i++)
			if (i < 9)
				printf("%d ", i + 1);
			else
				printf("%d\n", i + 1);
		printf("---------------------------------\n���࿩��- ");
		for (i = 0; i < 10; i++)
			printf("%d ", chair[i]);

		printf("\n(������¼���1, ������������¼���0����ǥ�õ˴ϴ�)\n");

		if (fir == 'y')
		{

			printf("\n�������¼���ȣ���Է��Ͻÿ�:");
			scanf("%d", &sec);
			getchar();

			if (sec >= 1 && sec <= 10)
			{
				if (chair[sec - 1] == 0)
				{
					chair[sec - 1] = 1;
					printf("����Ǿ����ϴ�.\n");
				}
				else printf("�̹̿�����ڸ��Դϴ�. �ٸ��¼��������ϼ���.\n");
			}
			else printf("1��10�����ǰ����Է����ּ���.\n");
		}
		else
			break
	}

	return 0;
}