#include <stdio.h>

int impar(int vet[100],int N){
	int i, impar=0;
	for(i=1;i<=N;i++){
	printf("vetor[%d]: ",i);
	scanf("%d",&vet[i]);	
	}
	for(i=1;i<=N;i++){
		if(vet[i]%2!=0)
			impar++;
		
	}
	return impar;
}
int main(){
	int N,vet[100],res=0;
	printf("informe a quantidade de elementos no vetor: ");
	scanf("%d",&N);
	res=impar(vet,N);
	printf("elementos impares do vetor: %d",res);
	
}