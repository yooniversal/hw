#include <stdio.h>
#include <string.h>

int main(void)
{

    char s[] = "the c book";
    char seps[] = " ,\t\n";
    char* token;

    int wc = 0;
    token = strtok(s, seps);   // ���ڿ��� �����ϰ� ���� ��ū�� ��´�
                               // s���� seps�� �ִ� �ܾ�� ������ �и�
    while (token != NULL)
    {
        //���ڿ� s�� ��ū�� �ִ� ���� �ݺ��Ѵ�

        token = strtok(NULL, seps);
        wc++;
    }

    printf("�ܾ��� ����: %d\n", wc);

    return 0;
}
