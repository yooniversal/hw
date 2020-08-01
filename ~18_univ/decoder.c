#include <stdio.h>
#include <string.h>
#pragma warning(disable : 4996)

void decrypt(char cipher[], int shift);
int main(void)
{
	char cipher[50];
	int shift = 3;

	printf("문자열을 입력하시오 :");
	gets(cipher); // 한줄 전체 입력
	decrypt(cipher, shift);

	return 0;
}
void decrypt(char cipher[], int shift)
{
	int i = 0;

	while (cipher[i] != '\0')
	{
		if (cipher[i] >= 'a' && cipher[i] <= 'z')
			cipher[i] -= shift;
		else if (cipher[i] > 'z')
			cipher[i] += 26;
		i++;
	}

	printf("복호화된 문자열 : %s\n", cipher);
}