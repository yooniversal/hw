#include <stdio.h>

int main(void)
{
	char fir;
	int chair[10] = { 0 };
	int sec1, sec2;
	int i, thr;

	while (1)
	{

		printf("좌석을예약하시려면y를입력하시오:");
		scanf("%c", &fir);
		getchar();

		printf("\n---------------------------------\n좌석번호- ");
		for (i = 0; i < 10; i++)
			if (i < 9)
				printf("%d ", i + 1);
			else
				printf("%d\n", i + 1);
		printf("---------------------------------\n예약여부- ");
		for (i = 0; i < 10; i++)
			printf("%d ", chair[i]);

		printf("\n(예약된좌석은1, 예약되지않은좌석은0으로표시됩니다)\n");

		if (fir == 'y')
		{

			printf("좌석을1개예약하시려면1을, 2개예약하시려면2를입력하시오:");
			scanf("%d", &thr);
			getchar();

			if (thr == 1)
			{
				printf("\n예매할좌석번호를입력하시오:");
				scanf("%d", &sec1);
				getchar();

				if (sec1 >= 1 && sec1 <= 10)
				{
					if (chair[sec1 - 1] == 0)
					{
						chair[sec1 - 1] = 1;
						printf("예약되었습니다.\n");
					}
					else printf("이미예약된자리입니다. 다른좌석을선택하세요.\n");
				}
				else printf("1과10사이의값을입력해주세요.\n");
			}
			else if (thr == 2)
			{
				printf("\n예매할좌석번호를입력하시오(예:1 2) :");
				scanf_s("%d %d", &sec1, &sec2);
				getchar();

				if ((sec1 >= 1 && sec1 <= 10) && (sec2 >= 1 && sec2 <= 10))
				{
					if (chair[sec1 - 1] == 0 && chair[sec2 - 1] == 0)
					{
						chair[sec1 - 1] = 1;
						chair[sec2 - 1] = 1;
						printf("예약되었습니다.\n");
					}
					else printf("이미예약된자리입니다. 다른좌석을선택하세요.\n");
				}
				else printf("1과10사이의값을입력해주세요.\n");
			}
			else printf("1 또는2만입력해주세요.\n");
		}
		else
			break
	}


	return 0;
}