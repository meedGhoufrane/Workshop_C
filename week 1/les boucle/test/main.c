#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int i , l, j ,k ,h;
	
	printf("enter ur number :\n");
	scanf("%d",&l);
	
   	for(i=1;i<=l;i++){
   		
     	for(k=l;k>=i;k--){
     		
     		printf(" "); 
		}	
	   	for(j=1;j<=i;j++){
	   	
			if(j>1) {
				for(h=1;h<=2;h++){
					printf("*");
				}
			}else{
				printf("*");
			}
		}
		
		if(i<l){
			printf("\n");
		}
     			
	}
	
	return 0;
	//     *
	//    ***
	//   *****
	//  *******
	// *********
}
