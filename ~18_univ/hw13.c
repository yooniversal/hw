#include <stdio.h>

int main(void)
{
	double arr[6] = { 19, 2, 25, 92, 36, 45 };
	int i;
	double sum = 0.0;	 // 합
	double* maxp = NULL, * minp = NULL;
	double val = 0.0;	 // 평균
	double vv = 0.0;	 // 분산

	for (i = 0; i < 6; i++)
		sum += arr[i];

	val = sum / 6;
	vv = (sum - val) * (sum - val);

	printf("배열에 저장된 원소들의 값\n");
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

	printf("배열 원소 중에서 최소값 : %lf\n\n", *minp);
	printf("배열 원소 중에서 최대값 : %lf\n\n", *maxp);
	printf("배열 원소들의 평균 : %lf\n\n", val);
	printf("배열 원소들의 분산 : %lf\n", vv);
	return 0;
}