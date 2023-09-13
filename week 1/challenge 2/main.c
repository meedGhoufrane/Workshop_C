#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int  f ;
	 printf("enter Fahrenheit :\n");
	 scanf("%d",&f);
	 
	float c = (f-32)/1.8;
      
      printf("%.2f", c );
      
      if( c <= 0){
      	printf(" temperature  tres froid");
	  }else if( c>0 && c <= 15){
	  	      	printf(" temperature froid");
	  }
	  else if( c>15 && c<=30){
	  	printf(" temperature chaud");
	  }
	  else {
	  	printf(" temperature tres chaud");
	  }
      
      
	return 0;
}
