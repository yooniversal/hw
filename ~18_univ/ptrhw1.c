#include <stdio.h>

int main(void)
{
	int x = 0x12345678; // ������ ���� x�� 16���� 12345678�� ����
	unsigned char* xp = (char*)&x; // unsigned char�� ���� xp�� �����ͷ� ����
									  // ������ ���� x�� char�� ����ȯ�ؼ� xp�� �����ֱ�
	printf("����Ʈ ���� : %x %x %x %x\n", xp[0], xp[1], xp[2], xp[3]); // x�� ���� ����Ű�� xp�� ���� �� ���

	return 0;
}