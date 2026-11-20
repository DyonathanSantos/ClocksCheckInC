#include <stdio.h>
#include "lista.h"
#include <math.h>
#include <time.h>

int main(int argc, char *argv[]) {
	int temp, posicao, quantidade, i;
	int opcao;
	double start, finish, elapsed;

	printf("Digite a quantidade de elementos para testar: ");
	scanf("%d", &quantidade);
	inicializar();

	do {
		//exibir o menu
		printf("\n    MENU");
		printf("\n1. Insetir %d elementos dentro da lista", quantidade);
		printf("\n2. Remover %d elementos dentro da lista", quantidade);
		printf("\n3. Imprimir %d elementos dentro da lista", quantidade);
		printf("\n0. Sair");
		printf("\nDigite a opcao desejada: ");
		
		//ler a opcao desejada pelo usuario
		scanf("%d", &opcao);
		
		//processar a funcionalidade
		switch(opcao) {
			case 1:
				start = (double) clock();
				for(i = 0; i < quantidade; i++){
					temp = obterDado();
					posicao = obterDado();
					inserir(temp, posicao);
					exibirDado(temp);
				}
				finish = (double) clock();
				elapsed = finish - start;
				printf("\nForam utilizados %.2f clocks", elapsed);				
				break;
			case 2:
				start = (double) clock();
				for( i = 0; i < quantidade; i++){
					posicao = obterDado();
					temp = remover(posicao);
					exibirDado(temp);
				}
				finish = (double) clock();
				elapsed = finish - start;
				printf("\nForam utilizados %.2f clocks", elapsed);
				break;
			case 3:
				start = (double) clock();
				imprimir();
				finish = (double) clock();
				elapsed = finish - start;
				printf("\nForam utilizados %.2f clocks", elapsed);
				break;
			case 0:
				printf("Encerrando o programa...");
				break;
			default:
				printf("\nOpcao invalida. Escolha um numero valido de opcao.");
		}
		
	} while(opcao != 0);
}
