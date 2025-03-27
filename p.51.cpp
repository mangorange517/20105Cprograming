#include<stdio.h>
char dna;
int main(){
	scanf("%c", &dna); 
	if(dna=='A') printf("ADENINE");
	else if(dna=='T') printf("THYMINE");
	else if(dna=='G') printf("GUANINE");
	else if(dna=='C') printf("CYTOSINE");
		
	return 0;
}
