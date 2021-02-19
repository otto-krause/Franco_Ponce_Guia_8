#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

	void oct(float num);
	
	int main() {
	float num=0;
	printf(" Ingrese un numero ");
	scanf("%f",&num);
	oct(num);
	}
	
	void oct (float num){
		float res=0;
		res=num/8;
		printf(" La octava parte de %f es %f ",num,res);
	}
	
