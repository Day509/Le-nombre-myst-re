#include "meilleureScore.h"

void jeux()
{
	int jouer = 1;
	while(jouer == 1)
	{
		printf("Le meilleur score est de %d coups\n", lecture_meilleurScore());
		int saisie = 0;
		srand(time(NULL));
		int nombreMystere = (rand() % (MAX - MIN + 1)) + MIN;
		int essai; 
		int coup = 1;
		printf("Quelle est le nombre mystere? ");
		scanf("%d", &essai);
		if (essai == nombreMystere)
		{
			printf("Bravo, tu as trouvé du premier coup\n");
			meilleurScore_ecriture(&coup);
			if (coup < lecture_meilleurScore())
			{
				printf("Vous avez réalisé le meilleure score : %d\n", coup);
			}
		}
		else
		{
			while(essai != nombreMystere)
			{
				printf("-------------------------------------------------\n");
				if (essai > nombreMystere)
				{
					printf("C'est un peu moins que ça\n");
				}
				else
					printf("C'est un peu plus que ça\n");
				printf("Quelle est le nombre mystere? ");
				scanf("%d", &essai);
				coup+=1;
			}
			printf("Bravo tu as trouvé le nombre mystere: %d\n", essai);
			printf("Tu l'as trouvé en %d coups\n", coup);
		}
		while(saisie == 0)
		{
			printf("Voulez-vous rejouer ? Tapez 1 pour rejouer ou 0 pour arreter\n");
			scanf("%d", &jouer);
			if (jouer == 1 || jouer == 0)
			{
				saisie = 1;
				break;
			}
			else	
				incorrect();
		}
		printf("-------------------------------------------------\n");
		if (coup < lecture_meilleurScore())
		{
			meilleurScore_ecriture(&coup);
			printf("Vous avez réalisé le meilleure score : %d\n", coup);
		}
	}
}

void ModeMultijoueur()
{
	int jouer = 1;
	while(jouer == 1)
	{
		int saisie = 0;
		int nombreMystere, joueur;
		printf("Qui choisira le numéro mystère? Tapez 1 pour le joueur 1 ou 2 pour le joueur2: ");
		scanf("%d", &joueur);
		if (joueur > 2 || joueur < 1)
		{
			incorrect();
			ModeMultijoueur();
		}
		printf("Joueur %d Choississez votre numéro mystère\n", joueur);
		scanf("%d", &nombreMystere);
		int essai, coup = 1;
		system("clear");
		if (joueur == 1)
		{
			joueur = 2;
		}
		else if (joueur == 2)
		{
			joueur = 1;
		}			
		printf("Joueur %d, quelle est le nombre mystere? ", joueur);
		scanf("%d", &essai);
		if (essai == nombreMystere)
		{
			printf("Bravo joueur %d, tu as trouvé du premier coup\n", joueur);
		}
		else
		{
			while(essai != nombreMystere)
			{
				printf("-------------------------------------------------\n");
				if (essai > nombreMystere)
				{
					printf("C'est un peu moins que ça\n");
				}
				else
					printf("C'est un peu plus que ça\n");
				printf("Quelle est le nombre mystere? ");
				scanf("%d", &essai);
				coup+=1;
			}
			printf("-------------------------------------------------\n");
			printf("Bravo Joueur %d, tu as trouvé le nombre mystere: %d\n", joueur, essai);
			printf("Tu l'as trouvé en %d coups\n", coup);
		}
		while(saisie == 0)
		{
			printf("Voulez-vous rejouer ? Tapez 1 pour rejouer ou 0 pour arreter\n");
			scanf("%d", &jouer);
			if (jouer == 1 || jouer == 0)
			{
				saisie = 1;
			}
			else	
				incorrect();
		}
		printf("-------------------------------------------------\n");
	}
}
