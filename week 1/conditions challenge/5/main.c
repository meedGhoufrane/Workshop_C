#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int y , insert;
	
	printf("enter year ");
	scanf("%d",&y);
	
	printf("Menu de conversion :\n");
    printf("1. Annee en Mois\n");
    printf("2. Annee en Jours\n");
    printf("3. Annee en Heures\n");
    printf("4. Annee en Minutes\n");
    printf("5. Annee en Secondes\n");
    printf("Choisissez une option (1-5) : ");
    scanf("%d", &insert);
	
	switch (insert){
		case 1:
			printf("%d Annee en Mois %d",y,y*12);
			break;
		case 2:
			printf("%d Annee en Jours %d",y,y*365);
			break;
		case 3:
			printf("%d Annee en Heures %d",y,y*8760);
			break;
		case 4:
			printf("%d Annee en Minutes %d",y,y*525600);
			break;
		case 5:
			printf("%d Annee en Secondes %d",y,y*31536000);
			break;
	
       default:
       	printf("erreur");
	}
	
	
	return 0;
}
