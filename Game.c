#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	
	int vet1[1];
	int vet2[1];
    int placar1;
    int placar2; 
	int funcao;
	char player1[100];
	char player2[100];
	
	srand(time(NULL));
	
	for(placar1=0; placar1 < 1; placar1++){
		placar1[vet1] = rand() % 10;
	}
	
	for(placar2=0; placar2<1; placar2++){
		placar2[vet2] = rand() % 10;
	}
	
	
	printf("Por favor não de espaco nos nomes, se nao buga :) \n");
	printf("Digite o nome do time 1: ");
	scanf("%s", player1);
	printf("Digite o nome do time 2: ");
	scanf("%s", player2);
	
	printf("Deseja comecar a simulacao? \n");
	printf("0 = Sim | 1 = Nao \n");
	scanf("%d", &funcao);
	
	
	
	if(funcao == 0){
		printf("O placar do jogo ficou: \n");
		printf("%s ", player1);
			for (placar1 = 0; placar1 < 1; placar1++){
		printf("%d", placar1[vet1]);
	}
		printf("| ");
		printf("%s ", player2);
		for (placar2 = 0; placar2 < 1; placar2++){
		printf("%d", placar2[vet2]);
	}
	}else if(funcao == 1){
		printf("Entao por que executou o arquivo seu bosta!");
	}
	
	return 0;
	
	
	
	
	
	

	
}