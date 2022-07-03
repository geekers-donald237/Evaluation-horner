#include "eval_polynome.h"
#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i,j,n;
	float *poly,a,result;
	printf("Entrer la taille du tableau \n");
	scanf("%d",&n);
	poly = (float*)malloc(sizeof(float)*n);
	for(i=0;i<n;i++){
	printf("Element [%d]",i);
	scanf("%f",&poly[i]);
	}
	printf("Entrer la valeur pour l'évaluation\n");
	scanf("%f",&a);
	result = eval_polynome(poly,n,a);
 	printf("L'évaluation P[%.2f] = %.2f \n",a,result);
	return 0;
}
