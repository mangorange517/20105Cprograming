#include<stdio.h>
char dna;
int main(){
	scanf("%c", &dna); 
	if(dna=='A'||dna=='a') printf("ADENINE");
	else if(dna=='T'||dna=='t') printf("THYMINE");
	else if(dna=='G'||dna=='g') printf("GUANINE");
	else if(dna=='C'||dna=='c') printf("CYTOSINE");
	else
	printf("잘 못 입력하셨습니다.");
		
	return 0;
}
