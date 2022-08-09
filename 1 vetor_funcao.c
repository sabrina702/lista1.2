#include <stdio.h>

int soma(int vet[],int N){
	int i,soma=0;
	for(i=1;i<=N;i++){
	printf("vetor[%d]: ",i);
	scanf("%d",&vet[i]);
	soma+=vet[i];	
	}
	return soma;
}
int main(){
	int N,i,vet[100],res=0;
	printf("informe a quantidade de elementos no vetor: ");
	scanf("%d",&N);
	res=soma(vet,N);
	printf("soma dos elementos do vetor: %d",res);
	
}