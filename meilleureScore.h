

void meilleurScore_ecriture(int* mc)
{
	FILE* fichier = NULL;
	fichier = fopen("meilleur_score_nombre_mystère.txt", "w");
	if (fichier != NULL)
	{

		fprintf(fichier, "%d", *mc);


		fclose(fichier);
	}
	else
	{
		printf("Oups,ça a bugué chakal. Je kil\n");
		exit(-1);
	}
}
int lecture_meilleurScore()
{
	FILE* fichier = NULL;
	fichier = fopen("meilleur_score_nombre_mystère.txt", "r");
	int mc;
	if (fichier != NULL)
	{

		fscanf(fichier, "%d", &mc);
		fclose(fichier);
		return mc;
	}
	else
	{
		printf("Vous êtes nouveau non? Je n'ai pas trouver de meilleur score, mais ce n'est pas grave je vais vous en crée un\n");
		fichier = fopen("meilleur_score_nombre_mystère.txt", "w");
		fprintf(fichier, "999");
		fclose(fichier);
		return 999;
	}
	
}