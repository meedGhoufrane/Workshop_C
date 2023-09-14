#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	 int a , b ,re ;
	 
	 printf("enter value a :\n");
	 scanf("%d",&a);
	 printf("enter value b :\n");
	 scanf("%d",&b);
	 
	 
	 if(a == b ){
	   re =(a + b) * 3;
	 }else{
	 	re = a+b;
	 }
	 
	 printf(" result is %d",re );
	 
	return 0;
}
