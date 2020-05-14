#include <stdio.h>

int get_sum(int array[], int size)
int main(void) {
    int m[3][6] = { 10 }; // 모든 원소 10으로 초기화
    int i;
    int psum[3] = { 0 };
    int sum = 0;

    for (i = 0; i < 3; i++)
        psum[i] = get_sum(array[i], 6);

    for (i = 0; i < 3; i++)
        sum += psum[i];

    return 0;
}

int get_sum(int array[], int size) {
    int* p, * endp;
    int sum = 0;

    p = &array[0];
    endp = &array[size - 1];

    while (p <= endp)
        sum += *p++;

    return sum;
}