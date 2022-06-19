/* 
	Entrega 04
	POO CC Grupo01 Trab Entrega04
	Nomes: 
		2D/1: 
			Eduardo Mendes Machado - 27879062;
			Maurício Pereira da Silva Junior - 29612161;
			
		3D/1: 
			Gabriel Silva Barros - 30349044;
			Gustavo Tiburcio Maia da Silva - 26052130;
			Iago Vinícius Alves Diniz - 25073656;
			Willian Wagner Xavier Ramos da Silva - 26523426; 


	Integração do programa: Willian;
*/

#include <stdio.h>
#include <stdlib.h>

#include "Banco.h"

/* Protótipo das funções menu */
void MenuContaCorrente(void);
void MenuContaPoupanca(void);

int main(void) {
	
	/* declaração de variáveis */
	int op;
	
	do {
		system("cls");
		
		printf("\n");
		printf("	   Banco Devedores		\n\n");
        printf("		  SYSCofre	 	    \n\n");
        printf("   	(1) Conta Corrente      \n\n");
        printf("	(2) Conta Poupanca      \n\n");
        printf("	(3) Conta Especial      \n\n");
        printf("	(4) Sair      		    \n\n");
        printf("\n");
        printf("Digite a opcao desejada: ");

        
		/* exibe as opções */
		scanf("%d", &op);
		fflush(stdin);
		
		printf("\n");
		switch(op) {
			case 1:
				MenuContaCorrente();
				break;
			case 2:
				MenuContaPoupanca();
				break;
			case 3:
				printf("\nEm desenvolvimento\n\n");
				system("PAUSE");
				break;
			case 4:
				printf("\n ** Fim ***\n\n");
				break;
			default:
				printf("\n 		--->	Opcao invalida\n\n");
				system("PAUSE");
		}
	} while(op != 4);

	return EXIT_SUCCESS;
}

/*	Menu da opção Conta Corrente */
void MenuContaCorrente(void) {
	
	/* declaração de variáveis */
	int op;
	
	do {
		system("cls");
		printf("\n");
		printf("	   Banco Devedores		\n\n");
        printf("		  SYSCofre	 	    \n\n");
        printf("       ----------------------\n");
        printf("	   CONTA CORRENTE		\n");
        printf("       ----------------------\n\n");
        printf("	 (1)	Abertura 	  	\n\n");
        printf("	 (2)	Listagem 	 	\n\n");
        printf(" 	 (3)	Sair     	    \n\n");
        printf("\n");
        printf("Digite a opcao desejada: ");
        
		/* exibe as opções */
		scanf("%d", &op);
		fflush(stdin);
		switch(op) {
			case 1:
				Banco::AberturaContaCorrente();
				break;
			case 2:
				Banco::ListagemContasCorrentes();
				break;
			case 3:
				printf("\n ** Fim ***\n\n");
				system("PAUSE");
				break;
			default:
				printf("\n 		--->	Opcao invalida\n\n");
				system("PAUSE");
		}
	} while(op != 3);
}

/*	Menu da opção Conta Poupança */
void MenuContaPoupanca(void) {
	
	/* declaração de variáveis */
	int op;
	
	do {
		system("cls");
		printf("\n");
		printf("	   Banco Devedores		\n\n");
        printf("		  SYSCofre	 	    \n\n");
        printf("       ----------------------\n");
        printf("	   CONTA POUPANCA		\n");
        printf("       ----------------------\n\n");
        printf("	 (1)	Abertura 	  	\n\n");
        printf("	 (2)	Listagem 	 	\n\n");
        printf(" 	 (3)	Sair     	    \n\n");
        printf("\n");
        printf("Digite a opcao desejada: ");
        
		/* exibe as opções */
		scanf("%d", &op);
		fflush(stdin);
		switch(op) {
			
			case 1:
				Banco::AberturaContaPoupanca();
				break;
			case 2:
				Banco::ListagemContasPoupanca();
				break;
			case 3:
				printf("\n ** Fim ***\n\n");
				system("PAUSE");
				break;
			default:
				printf("\n 		--->	Opcao invalida\n\n");
				system("PAUSE");
		}
	} while(op != 3);
}
