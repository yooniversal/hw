#include <stdio.h>
#include <string.h>
#pragma warning(disable : 4996)

void decrypt(char cipher[], int shift);
int main(void)
{
	char cipher[50];
	int shift = 3;

	printf("���ڿ��� �Է��Ͻÿ� :");
	gets(cipher); // ���� ��ü �Է�
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

	printf("��ȣȭ�� ���ڿ� : %s\n", cipher);
}