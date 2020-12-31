
void Niveau()
{
	int difficulter;
	printf("Choississez le niveau de difficulté:\n");
	printf("-------------------------------------------------\n");
	printf("1-Facile\n2-Moyen\n3-Dur\n4-Très dur\n");
	scanf("%d", &difficulter);
	switch(difficulter)
	{
		case 1:
			MAX = 50; 
			printf("Votre chiffre se trouve entre 1 et %d\n", MAX);
			jeux();
			break;
		case 2:
			MAX = 100;
			printf("Votre chiffre se trouve entre 1 et %d\n", MAX);
			jeux();
			break;
		case 3:
			MAX = 500;
			printf("Votre chiffre se trouve entre 1 et %d\n", MAX);
			jeux();
			break;
		case 4:
			MAX = 1000;
			printf("Votre chiffre se trouve entre 1 et %d\n", MAX);
			jeux();
			break;
		default:
			incorrect();
	}
}