#include <stdio.h>

enum sound { Do = 1, Re, Mi, Fa, So, La, Ti };

int main(void)
{
	enum sound sd;
	int i;

	for (i = 0; i < 8; i++) {

		printf("input : ");
		scanf("%d", (int*)&sd);

		switch (sd)
		{
		case Do:
			printf("Do<doe>, a deep, a female deer\n");
			break;

		case Re:
			printf("Re<Ray>, a drop of golden sun\n");
			break;

		case Mi:
			printf("Mi<Me>, a name I call myself\n");
			break;

		case Fa:
			printf("Fa<Far>, aling long way to run\n");
			break;

		case So:
			printf("So<Sew>, a needle pulling thread\n");
			break;

		case La:
			printf("La, a note to follow Sew\n");
			break;

		case Ti:
			printf("Ti<Tea>, a drink woth jam on bread\n");
			break;

		default:
			printf("That will bring us back to Doe<oh~oh~oh>\n");
			break;
		}
	}

	return 0;
}