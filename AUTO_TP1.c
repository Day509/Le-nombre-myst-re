#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int MAX =100;
const int MIN = 1;

void incorrect()
{
	printf("Votre saisie n'est pas bonne\n");
}

#include "jeux.h"
#include "niveau.h"

int main(int argc, char const *argv[])
{
	system("clear");

	int mode, fini =1, terminer;;
	while(fini == 1)
	{
		printf("Choississez le mode de jeux\n");
		printf("1-Joueur VS CPU\n");
		printf("2-Joueur VS Joueur\n");
		scanf("%d", &mode);
		switch(mode)
		{
			case 1:
				Niveau();
				break;
			case 2:
				ModeMultijoueur();
				break;
		}
		printf("Avez-vous fini? Tapez 0 pour confirmer .\n");
		scanf("%d", &terminer);
		if (terminer == 0)
		{
			break;
		}
	}
	return 0;
}