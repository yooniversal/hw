#include <stdio.h>

int main(void)
{
	char fir;
	int chair[10] = { 0 };
	int sec = 0;
	int i;

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

			printf("\n예매할좌석번호를입력하시오:");
			scanf("%d", &sec);
			getchar();

			if (sec >= 1 && sec <= 10)
			{
				if (chair[sec - 1] == 0)
				{
					chair[sec - 1] = 1;
					printf("예약되었습니다.\n");
				}
				else printf("이미예약된자리입니다. 다른좌석을선택하세요.\n");
			}
			else printf("1과10사이의값을입력해주세요.\n");
		}
		else
			break
	}

	return 0;
}