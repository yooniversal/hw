#include <stdio.h>

int main(void)
{
	double arr[6] = { 19, 2, 25, 92, 36, 45 };
	int i;
	double sum = 0.0;	 // ��
	double* maxp = NULL, * minp = NULL;
	double val = 0.0;	 // ���
	double vv = 0.0;	 // �л�

	for (i = 0; i < 6; i++)
		sum += arr[i];

	val = sum / 6;
	vv = (sum - val) * (sum - val);

	printf("�迭�� ����� ���ҵ��� ��\n");
	for (i = 0; i < 6; i++)
		printf(" %.lf", arr[i]);

	printf("\n");

	maxp = minp = arr;

	for (i = 0; i < 6; i++) {
		if (*maxp < arr[i])
			maxp = &arr[i];
		if (*minp > arr[i])
			minp = &arr[i];
	}

	printf("�迭 ���� �߿��� �ּҰ� : %lf\n\n", *minp);
	printf("�迭 ���� �߿��� �ִ밪 : %lf\n\n", *maxp);
	printf("�迭 ���ҵ��� ��� : %lf\n\n", val);
	printf("�迭 ���ҵ��� �л� : %lf\n", vv);
	return 0;
}