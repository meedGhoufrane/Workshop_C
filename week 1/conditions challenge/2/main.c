#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	 
	 char  cha;
	 
	 printf("enter ur character : \n");
	 scanf("%c",&cha);
	 
	     cha = tolower(cha);

	 switch (cha){
	 	
	 	case 'a':
	 	   printf("%c character is voyelle ",cha);
	 	   break;
		case 'i':
			printf("%c character is voyelle ",cha);
	 	   break;
		case 'o':
			printf("%c character is voyelle ",cha);
	 	   break;
		case 'e':
			printf("%c character is voyelle ",cha);
	 	   break;
		case 'u':
	    	printf("%c character is voyelle ",cha);
		break ;
		
		default:
	    	printf("%c character isn't  voyelle",cha);
	 } 
	 
	return 0;
}
