/* 
	Entrega 04
	POO CC Grupo01 Trab Entrega04
	Nomes: 
		2D/1: 
			Eduardo Mendes Machado - 27879062;
			Maur�cio Pereira da Silva Junior - 29612161;
			
		3D/1: 
			Gabriel Silva Barros - 30349044;
			Gustavo Tiburcio Maia da Silva - 26052130;
			Iago Vin�cius Alves Diniz - 25073656;
			Willian Wagner Xavier Ramos da Silva - 26523426; 


	Integra��o do programa: Willian;
*/

#include <stdio.h>
#include <stdlib.h>

#include "Banco.h"

/* Prot�tipo das fun��es menu */
void MenuContaCorrente(void);
void MenuContaPoupanca(void);

int main(void) {
	
	/* declara��o de vari�veis */
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

        
		/* exibe as op��es */
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

/*	Menu da op��o Conta Corrente */
void MenuContaCorrente(void) {
	
	/* declara��o de vari�veis */
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
        
		/* exibe as op��es */
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

/*	Menu da op��o Conta Poupan�a */
void MenuContaPoupanca(void) {
	
	/* declara��o de vari�veis */
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
        
		/* exibe as op��es */
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
