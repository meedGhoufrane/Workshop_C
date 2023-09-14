#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int val ;
	
	printf("enter value : \n");
	scanf("%d",&val);
	
	if(val == 0){
		printf("erreur ");
	}
	 else if (val % 2 == 0){
		printf("number is : paire ");
	}
	else if(val % 2 == 1){
		printf("number is impaire");
	}
	return 0;
}
