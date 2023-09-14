#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float r , c,pi = 3.14;
	 
	printf("enter  rayon  :\n");
	scanf("%f",&r);
	
	   c = 2 * pi * r;

        printf("la circonférence d'un cercle : %.2f",c);
	return 0;
}
