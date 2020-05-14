#include <stdio.h>
#define SIZE 10

int quicksort(int[], int, int);

int main(void)
{
	int i;
	int list[SIZE] = { 3, 2, 9, 7, 1, 4, 8, 0, 6, 5 };

	printf("정렬 전: ");
	for (i = 0; i < SIZE; i++) printf("%d ", list[i]);
	printf("\n");

	quicksort(list, 0, SIZE - 1);
	quicksort(list, 0, SIZE - 1);

	printf("정렬 후: ");
	for (i = 0; i < SIZE; i++) printf("%d ", list[i]);
	printf("\n");

	return 0;
}

int quicksort(int data[], int start, int end) // 퀵 정렬 함수
{
	int tmp, pivot, left, right;
	pivot = end; left = start; right = end;

	if (start < end) {
		while (left < right) {
			while (data[left] < data[pivot] && left < right) left++;
			while (data[pivot] <= data[right] && left < right) right--;
			if (data[pivot] < data[left] && data[right] < data[pivot]) {
				tmp = data[left];
				data[left] = data[right];
				data[right] = tmp;
			}
		}

		if (data[left] > data[pivot]) {
			tmp = data[pivot];
			data[pivot] = data[left];
			data[left] = tmp;
		}

		quicksort(data, start, right - 1);
		quicksort(data, right + 1, end);
	}
}