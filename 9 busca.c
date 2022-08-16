#include <stdio.h>
#include <string.h>
#include "vetlib.h"

int main(){
	int vet[100], n, busca, res;
	printf("informe a quantidade de elementos do vetor: ");
	scanf("%d",&n);
	geraVet(vet,n);
	printf("vetor gerado: \n");
	printVet(vet,n);
	printf("valor para busca: ");
	scanf("%d",&busca);
	res = existe(busca,vet,n);
	printf("%d encontrado %d vez(es) \n",busca,res);
	return 0;
	
}
