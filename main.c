#include <stdio.h>
#include <time.h>

#define MIN 1

int		main(void)
{
	int	mystery;
	int	guess;
	int	tries;
	int	replay;
	int	players;
	int	mode;
	int	max;

	srand(time(NULL));
	do
	{
		printf ("Veuillez choisir un mode de difficulté. 1, 2 ou 3. ");
		scanf ("%d", &mode);
		if (mode == 1)
			max = 100;
		else if (mode == 2)
			max = 1000;
		else
			max = 10000;
		printf("Voulez-vous jouer en mode 1 ou 2 joueurs ? ");
		scanf("%d", &players);
		if (players == 1)
			mystery = (rand() % (max - MIN + 1)) + MIN;
		else
		{
			do
			{
				printf("Joueur 1 - Veuillez entrer le nombre mystère à deviner, compris entre %d et %d. ", MIN, max);
				scanf("%d", &mystery);
			} while (mystery < MIN || mystery > max);
			printf("Joueur 2 - A vous de jouer\n");
		}
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