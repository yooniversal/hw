#include <stdio.h>
#include <stdlib.h>
#define SIZE 100

int main(void)
{
	FILE* fp1 = NULL;
	FILE* fp2 = NULL;
	char input;
	char buffer[SIZE];
	int i;

	if ((fp1 = fopen("convert.c", "r")) == NULL) {
		fprintf(stderr, "cannot open convert.c");
		exit(1);
	}

	if ((fp2 = fopen("char_convert.c", "w")) == NULL) {
		fprintf(stderr, "cannot open char_convert.c");
		exit(1);
	}

	printf("input : ");
	input = getchar();
	fflush(stdin);

	while (((('a' <= input) && (input <= 'z')) || (('A' <= input) && (input <= 'Z'))) == 0) {
		if (input == EOF) {
			printf("finish.\n");
			exit(1);
		}
		else {
			printf("input : ");
			input = getchar();

		}
	}

	if ((('a' <= input) && (input <= 'z')) || (('A' <= input) && (input <= 'Z'))) {
		while (fgets(buffer, SIZE, fp1) != NULL) {
			for (i = 0; i < SIZE; i++) {
				if (('a' <= buffer[i]) && (buffer[i] <= 'z'))
					buffer[i] -= 32;
				else if (('A' <= buffer[i]) && (buffer[i] <= 'Z'))
					buffer[i] += 32;
			}
			fputs(buffer, fp2);
		}

		printf("File char_convert.c is created!!!\n");
	}

	return 0;
}
