#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int a , b;
	float some,divis,stst,mult,modul ;
	
	
	
	
	printf("enter ur  number one \n");
	scanf("%d",&a);
	printf("enter ur number tow\n");
	scanf("%d",&b);
	
	 some = a + b;
	 stst =a-b;
	 mult = a * b;
	 divis = a/b;
	 modul = a % b;
	 
	
	printf("some is : %.1f \nsustraction is : %.1f \nmultip is %.1f \ndivis is %.1f \nmodulo is %.1f",some,stst,mult,divis,modul);
	
	return 0;
}
