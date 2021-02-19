#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
	
	void teca ();
	
	int main() {
	int num1,num2;
	printf(" Ingrese un numero : ");
	scanf("%d",&num1);
	printf(" Ingrese otro numero : ");
	scanf("%d",&num2);
	teca(num1,num2);	
	}
	
	void teca(int num1, int num2){
		if (num1>num2) {
			printf(" %d es mayor que %d ",num1,num2);
		}else if(num2>num1){
			printf(" %d es mayor que %d ",num2,num1);
		} else{
			printf(" %d es igual que %d ",num1,num2);
		}
		
	}
