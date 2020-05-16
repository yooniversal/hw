#include <stdio.h>

void MAM(int* ary, int size, int** maxptr, int** minptr);
int main(void)
{
	int* maxp = NULL;
	int* minp = NULL;
	int ary[5] = { 0 };
	int i;

	for (i = 0; i < 5; i++) {
		printf("���� �Է� %d: ", i + 1);
		scanf("%d", &ary[i]);
	}

	MAM(ary, 5, &maxp, &minp);

	printf("�ִ밪:%d �ּҰ�:%d\n", *maxp, *minp);

	return 0;
}

void MAM(int* ary, int size, int** maxptr, int** minptr)
{
	int* maxp = NULL, * minp = NULL;
	int i;

	maxp = minp = ary;

	for (i = 0; i < size; i++) {
		if (*maxp < ary[i])
			maxp = &ary[i];
		if (*minp > ary[i])
			minp = &ary[i];
	}

	*maxptr = maxp; // maxptr�� ���� �������̹Ƿ� *maxptr�� maxp�� �ּ� ����
	*minptr = minp;
}