#include <stdio.h>
#include <stdlib.h>
/* Définition d’une structure pour stocker les données. */
	
struct entry {
	char fnom[20];
	char pnom[20];
	char phone[10];
};

/* Déclaration d’un tableau de structures. */
struct entry list[4];
int i;

int main()
{
	for (i = 0; i < 4; i++)
	{
		printf("\nEntrez le nom :  ");
		scanf("%s", list[i].fnom);
		printf("\nEntrez le prénom : ");
		scanf("%s", list[i].pnom);
		printf("Entrez le numéro de telephone : ");
		scanf("%s", list[i].phone);
	}

	/* On saute deux lignes */

	printf("\n\n");

	/* Affichage des données. */
	for (i = 0; i < 4; i++)
	{
		printf("Nom :%s %s", list[i].fnom, list[i].pnom);
		printf("\t\tPhone: %s\n", list[i].phone);

	}
	return 0;
}
