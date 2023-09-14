#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int a , b ,c ;
	float moy , s ;
	
	printf("enter number s:\n");
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	
	s = a + b + c ;
	
	printf("some is: %.1f\n",s);
	
	moy = s/3;
	
	printf("Moyenne: %.1f\n",moy);
	
	 
	return 0;
}
