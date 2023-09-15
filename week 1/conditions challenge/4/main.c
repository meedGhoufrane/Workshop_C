#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	 float  a, b ,c , dilta, x , x1 ,x2 ;

     printf("enter les numbers :\n");
     scanf("%f",&a);
     scanf("%f",&b);
     scanf("%f",&c);

     dilta = b*b-4*a*c ;

     if(dilta < 0){
         printf("alors cette equation n admet pas de solutions réelles.");
     }
     else if (dilta == 0){
             x= -b/(2*a);
         printf(" x is %f",x);
     }
     else if (dilta>0){
         x1 = (-b-sqrt(dilta))/(2*a);
         x2 = (-b+sqrt(dilta))/(2*a);
         
         printf(" x1 is %f  x2 is %f" , x1 , x2);
     }

	return 0;
}
