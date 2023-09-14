#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
int number;

    printf("Entrez un nombre entier : ");
    scanf("%d", &number);
    printf(" octal : %o\n", number);
    printf(" hexadécimal : %X\n", number);
	return 0;
}
