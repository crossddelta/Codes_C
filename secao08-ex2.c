/*Bibliotecas*/
#include <stdio.h>
#include <stdlib.h>

int main(){
	int vetor1[10], vetor2[10], res[10];

	for(int i = 0; i < 10; i++){
		printf("Informe um valor para o primeiro vetor: ");
		scanf("%d", &vetor1[i]);
		printf("Informe um valor para o segundo vetor: ");
		scanf("%d", &vetor2[i]);
		res[i] = vetor1[i] + vetor2[i];
	}
	printf("\nA soma dos vetores informados é: \n");
	for(int i = 0; i < 10; i++){
		printf("%d\n", res[i]);
	}

return(0);
}
