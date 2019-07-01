#include <stdio.h>
#include <time.h>

#define MAX 100
#define MIN 1

int		main(void)
{
	int	mystery;
	int	guess;
	int	tries;
	int	replay;

	srand(time(NULL));
	do
	{
		mystery = (rand() % (MAX - MIN + 1)) + MIN;
		tries = 0;
		do
		{
			printf("Quel est le nombre ? ");
			scanf("%d", &guess);
			if (mystery < guess)
				printf("C'est moins !\n");
			else if (mystery > guess)
				printf("C'est plus !\n");
			tries++;
		} while (mystery != guess);
		
		printf("\nBravo, vous avez trouvé le nombre mystère en %d coups !\nVoulez-vous rejouer ? 0 ou 1. ", tries);
		scanf("%d", &replay);
	} while (replay == 1);

	return (0);
}