#include <stdio.h>

int main(){
	float vet[100], n,menor;
	int i;
	printf("informe a quantidade de numeros do vetor: ");
	scanf("%f",&n);
	for(i=0;i<n;i++){
		printf("vetor[%d]: ",i);
		scanf("%f",&vet[i]);	
	}
	menor = vet[0];
	for(i=0;i<n;i++){
	printf("vetor[%d]: %.2f\n",i,vet[i]);
		if(vet[i]<menor)
			menor=vet[i];
	}
	printf("menor numero do vetor: %.2f",menor);
	return 0;
}
