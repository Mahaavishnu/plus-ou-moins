#include <stdio.h>
#include <time.h>

#define MAX 100
#define MIN 1

int		main(void)
{
	int	mystery;
	int	guess;

	srand(time(NULL));
	mystery = (rand() % (MAX - MIN + 1)) + MIN;
	do
	{
		printf("Quel est le nombre ? ");
		scanf("%d", &guess);
		if (mystery < guess)
			printf("C'est moins !\n");
		else if (mystery > guess)
			printf("C'est plus !\n");
	} while (mystery != guess);
	
	printf("\nBravo, vous avez trouvé le nombre mystère !\n");

	return (0);
}