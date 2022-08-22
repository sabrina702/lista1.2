#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main(){
	char DNA[50], comple[50];
	int i, n;
	printf("Digite a sequenca do DNA:");
	gets(DNA);
	strupr(DNA);
	printf("%s \n", DNA);
	n = strlen(DNA);
	//gerar a comple
	//percorrer a DNA
	i=0;
	while(DNA[i]!='\0'){
		if (DNA[i] == 'A')
			comple[i] = 'T';
		else if (DNA[i] == 'C')
			comple[i] = 'G';
		i++;
	}
	
	//mostrar comple
	i=0;
	while(comple[i]!='\0'){
	 	printf("%c ",comple[i]);
		i++;
	}	
}
