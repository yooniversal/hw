#include <stdio.h>
#include <string.h>

int main(void)
{

    char s[] = "the c book";
    char seps[] = " ,\t\n";
    char* token;

    int wc = 0;
    token = strtok(s, seps);   // 문자열을 전달하고 다음 토큰을 얻는다
                               // s에서 seps에 있는 단어들 나오면 분리
    while (token != NULL)
    {
        //문자열 s에 토큰이 있는 동안 반복한다

        token = strtok(NULL, seps);
        wc++;
    }

    printf("단어의 개수: %d\n", wc);

    return 0;
}
