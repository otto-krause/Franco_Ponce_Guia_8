#include <stdio.h>
#include <stdlib.h>

 
	void porcentaje_hombres(float ch,float ct);
	void porcentaje_mujeres(float cm, float ct);
	
	int main() {
	float ct=0,ch,cm;
	printf("Ingrese la cantidad de curriculums de hombres ");
	scanf("%f",&ch);
	printf("Ingrese la cantidad de curriculums de mujeres ");
	scanf("%f",&cm);	 
	ct=ch+cm;
	porcentaje_hombres(ch,ct);
	porcentaje_mujeres(cm,ct);
	
	}
	
	void porcentaje_hombres(float ch, float ct){
	float ph=0;
	ph=(ch*100)/ct;
	printf("\n El porcentaje de hombres es el %f %",ph);
	}
	
	void porcentaje_mujeres(float cm, float ct){
	float pm=0;
	pm=(cm*100)/ct;
	printf("\n El porcentaje de mujeres es el %f % ",pm);
	
	}
	
