#include <stdio.h>
#include <stdlib.h>
/**Ce programme reçoit les coordonnées des coins d’un rectangle
      et en calcule l’aire. On suppose que la coordonnée y du coin
      supérieur gauche est plus grande que la coordonnée y du coin
      inférieur droit, que la coordonnée x du coin inférieur droit
      est plus grande que la coordonnée x du coin supérieur gauche,
      et que toutes les coordonnées sont positives.*/

	int largeur, longueur;
	long aire;

	struct coord //definition de la structure coord.
	{
		int x;
		int y;
	};

	struct rectangle //defintion et declation de structure complex sans initialisation.
	{
		struct coord hautgauche;
		struct coord basdroit;
	} maboite;

int main()
{
/**	int largeur, longueur;
        long aire;

        struct coord //definition de la structure coord.
        {
                int x;
                int y;
        };

        struct rectangle //defintion et declation de structure complex sans initialisation.
        {
                struct coord hautgauche;
                struct coord basdroit;
        } maboite;
*/

	//lecture des coordonnées
	printf("\nEntrez la coordonnée x du coin supérieur gauche  :");
	scanf("%d", &maboite.hautgauche.x);
	
	printf("\nEntrez la coordonnée y du coin supérieur gauche  :");
        scanf("%d", &maboite.hautgauche.y);

	printf("\nEntrez la coordonnée x du coin inférieur droit  :");
	scanf("%d", &maboite.basdroit.x);

	printf("\nEntrez la coordonnée y du coin inférieur droit  :");
        scanf("%d", &maboite.basdroit.y);
	// calcul de la longueur et de la largeur
	largeur = maboite.basdroit.x - maboite.hautgauche.x;
	longueur = maboite.basdroit.y - maboite.hautgauche.y;
	
	//calcul et affichage de l'aire
	aire = longueur * largeur;
	printf("\nLongueur= %d; largeur= %d", longueur, largeur);
	printf("\nL’aire du rectangle est de %ld unités.\n", aire);
	exit(EXIT_SUCCESS);
}
