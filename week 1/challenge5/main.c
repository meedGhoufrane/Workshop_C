#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	
	double d , mx1 , my1 , nx2, ny2;
	
	printf("enter  value  M :\n");
	scanf("%lf",&mx1);
	scanf("%lf",&my1);
	printf("enter  value  N :\n");
	scanf("%lf",&nx2);
	scanf("%lf",&ny2);
	
	d =  sqrt(pow(nx2-mx1,2)+pow(ny2-my1,2));
	
	printf("la distance entre deux points :%lf",d);
	
	 
	return 0;
}
