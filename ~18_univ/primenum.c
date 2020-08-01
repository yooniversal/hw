//how to get prime number
#include <stdio.h>
int prime(int n);

int main() {
    int n;

    printf("n ют╥б : ");
    scanf_s("%d", &n);

    for (int i = 2; i <= n; i++)
        if (prime(i) == 1)
            printf("%d\n", i);
    return 0;
}
int prime(int x) {
    for (int i = 2; i < x; i++)
        if ((x % i) == 0)
            return 0;
        else
            return 1;
}