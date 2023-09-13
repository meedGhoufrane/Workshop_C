#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	char nom[100] ,prenom[100],sexe,numeroTelephone[20];
    int age;

    // Saisie des informations personnelles depuis le clavier
    printf("Entrez votre nom : ");
    scanf("%s", nom);

    printf("Entrez votre prenom : ");
    scanf("%s", prenom);

    printf("Entrez votre age : ");
    scanf("%d", &age);

    printf("Entrez votre sexe (M/F) : ");
    scanf(" %c", &sexe); 

    printf("Entrez votre numéro de téléphone : ");
    scanf("%s", numeroTelephone);

    // Affichage des informations personnelles
    printf("\nInformations personnelles :\n");
    printf("Nom : %s\n", nom);
    printf("Prenom : %s\n", prenom);
    printf("age : %d\n", age);
    printf("Sexe : %c\n", sexe);
    printf("Numéro de téléphone : %s\n", numeroTelephone);
	
	
	return 0;
}
