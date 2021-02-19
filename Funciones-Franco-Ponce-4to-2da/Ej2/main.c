#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

	void area();
	void perimetro();
	int total(int aa, int bb, int ar, int per);
	
		int main( ) {
			int aa=0,bb=0,resul=0;
			printf(" Ingrese un numero ");
			scanf("%d",&aa);
			printf(" Ingrese otro numero ");		
			scanf("%d",&bb);
			area(aa,bb);
			perimetro(aa,bb);
		}
	
	void area(int aa, int bb)
	{
		int ar=0;
		ar=aa*bb;
		printf("\n El area de los dos numeros es : %d ",ar);
	}
	
	void perimetro(int aa, int bb)
	{
		int per=0;
		per=(2*aa)+(2*bb);
		printf("\n El perimetro de los dos numeros es : %d",per);	
	}
