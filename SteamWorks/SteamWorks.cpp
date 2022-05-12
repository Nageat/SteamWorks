
#include <iostream>
#include "../HeaderFiles/steam_api.h"

int main()
{
    SteamAPI_Init();

	if (SteamAPI_RestartAppIfNecessary(11051998))
	{
		printf("APP ID OK.\n");

		return 1;
	}

	if (!SteamAPI_Init())
	{
		printf("Fatal Error - Steam doit etre lance ! (SteamAPI_Init() failed).\n");
		return 1;
	}

    char lettre;
    char lettre2;
    //Les lettres rentrée par l'utilisateur
    int Longueur = 0;
    int largeur = 0;
    //La longeur et la largeur
    int x = 1;
    int y = 1;
    //Les variable des boucles pours
	    //Affectation par l'utilisateur de la taille et des lettres
    printf("Entrez la lettre 1\n");
    scanf("%c", &lettre);
    fflush(stdin);
    printf("Entrez la lettre2\n");
    scanf("%c", &lettre2);

    printf("Entrez la Longueur\n");
    scanf("\n%d", &Longueur);

    printf("Entrez la largeur\n");
    scanf("\n%d", &largeur);

    //Première boucle pour gère la longeur du tableu
    for (x = 1; x <= largeur; x++)
    {
        //Deuxsieme boucle pour dere la larger
        for (y = 1; y <= Longueur; y++)
        {
            if (x == 1 || x == Longueur || y == 1 || y == largeur) {
                printf("%c", lettre);
            }
            else
            {
                printf("%c", lettre2);
            }
        }
        printf("\n");

    }
	return 0;
}

