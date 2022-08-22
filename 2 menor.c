#include <stdio.h>

int main(){
	float vet[100], n,maior;
	int i;
	printf("informe a quantidade de numeros do vetor: ");
	scanf("%f",&n);
	for(i=0;i<n;i++){
		printf("vetor[%d]: ",i);
		scanf("%f",&vet[i]);	
	}
	maior = vet[0];
	for(i=0;i<n;i++){
	printf("vetor[%d]: %.2f\n",i,vet[i]);
		if(vet[i]>maior)
			maior=vet[i];
	}
	printf("maior numero do vetor: %.2f",maior);
	return 0;
}
