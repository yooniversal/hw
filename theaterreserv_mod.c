#include <stdio.h>

int main(void)
{
	char fir;
	int chair[10] = { 0 };
	int sec1, sec2;
	int i, thr;

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

			printf("�¼���1�������Ͻ÷���1��, 2�������Ͻ÷���2���Է��Ͻÿ�:");
			scanf("%d", &thr);
			getchar();

			if (thr == 1)
			{
				printf("\n�������¼���ȣ���Է��Ͻÿ�:");
				scanf("%d", &sec1);
				getchar();

				if (sec1 >= 1 && sec1 <= 10)
				{
					if (chair[sec1 - 1] == 0)
					{
						chair[sec1 - 1] = 1;
						printf("����Ǿ����ϴ�.\n");
					}
					else printf("�̹̿�����ڸ��Դϴ�. �ٸ��¼��������ϼ���.\n");
				}
				else printf("1��10�����ǰ����Է����ּ���.\n");
			}
			else if (thr == 2)
			{
				printf("\n�������¼���ȣ���Է��Ͻÿ�(��:1 2) :");
				scanf_s("%d %d", &sec1, &sec2);
				getchar();

				if ((sec1 >= 1 && sec1 <= 10) && (sec2 >= 1 && sec2 <= 10))
				{
					if (chair[sec1 - 1] == 0 && chair[sec2 - 1] == 0)
					{
						chair[sec1 - 1] = 1;
						chair[sec2 - 1] = 1;
						printf("����Ǿ����ϴ�.\n");
					}
					else printf("�̹̿�����ڸ��Դϴ�. �ٸ��¼��������ϼ���.\n");
				}
				else printf("1��10�����ǰ����Է����ּ���.\n");
			}
			else printf("1 �Ǵ�2���Է����ּ���.\n");
		}
		else
			break
	}


	return 0;
}