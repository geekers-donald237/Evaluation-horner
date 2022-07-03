#include "eval_polynome.h"
 

float puissance(float a, int i) //calcule "a" à la puissance "i" 
{
	float p = 1;
	for(int j=0;j<i;j++){
	p = p*a;
	}
	return p;
}

/*
float eval_polynome(float* poly, int n, float a) //Evalue un polynome avec Horner
{
  float result = 0;
	for(int i=0;i<=n;i++){
	result = result*a + poly[n-i];
	}
	return result;
}
*/

float eval_polynome(float* poly, int n, float a) //Evalue un polynome avec la puissance
{
  float result = 0;
	for(int i=0;i<n;i++){
	result += poly[i]*puissance(a,i);
	}
	return result;
}
