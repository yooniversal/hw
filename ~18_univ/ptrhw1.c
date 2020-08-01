#include <stdio.h>

int main(void)
{
	int x = 0x12345678; // 정수형 변수 x에 16진수 12345678을 대입
	unsigned char* xp = (char*)&x; // unsigned char형 변수 xp를 포인터로 선언
									  // 정수형 변수 x를 char로 형변환해서 xp와 맞춰주기
	printf("바이트 순서 : %x %x %x %x\n", xp[0], xp[1], xp[2], xp[3]); // x의 값을 가리키는 xp를 통해 값 출력

	return 0;
}