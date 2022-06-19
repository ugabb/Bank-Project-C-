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

// Arquivo: ContaCorrente.cpp

#include <stdio.h>
#include <stdlib.h>

#include "ContaBancaria.h"

//***********************************
// ao implementar cada metodo, 
// SUBSTITUIR o codigo DISPONIBILIZADO
// pelo codigo ADEQUADO 
//***********************************


//***********************************
// ContaCorrente
//***********************************

ContaCorrente* vetorCc[10];

int ContaCorrente::qtdContas = 0; 


//***********************************
// Metodos primitivos 
//***********************************

ContaCorrente::ContaCorrente (Cliente* titular):ContaBancaria(titular) {
	
  		printf("\n=============================\n");
		printf("Abertura feita com sucesso!!!");
		printf("\n=============================\n\n");
		system("PAUSE");
		    		
}

int ContaCorrente::RecuperarQtdContas (void) {
		
	return ContaCorrente::qtdContas;
}	  

void ContaCorrente::IncrementarQtdContas (void) {
	
	 ContaCorrente::qtdContas++;	

}

//***********************************
// Metodos derivados 
//***********************************

void ContaCorrente::AbrirConta (Cliente* titular) {
	
	// este mÃ©todo cria objeto do tipo ContaCorrente
	// e insere Conta Corrente no respectivo vetor
		
		
		int i;
			
		qtdContas = ContaCorrente::RecuperarQtdContas();
		
		if (qtdContas < 10) {
			i = qtdContas;
			vetorCc[i] = new ContaCorrente(titular);
			ContaCorrente::IncrementarQtdContas();
		}
	 		
}
      	
void ContaCorrente::AberturaConta (void) {
	
	system("CLS");
	
	printf("\n");
	printf("	   Banco Devedores		\n\n");
    printf("		  SYSCofre	 	    \n\n");
	
	printf("\n=============================\n");
	printf("Abertura Conta Corrente");
	
	 Cliente* titular;
	 
	 qtdContas = ContaCorrente::RecuperarQtdContas();
	 
	 if(qtdContas == 10) {
	 	printf("\nNao estamos abrindo contas desse tipo no momento\n\n");
	 	system("PAUSE");
	 	return;
	 }	
	 
	 titular = Cliente::ObterCliente();
	 
	 if (titular != NULL) {
	 	ContaCorrente::AbrirConta(titular);
	 }
}

void ContaCorrente::Listagem (void) {
	
	system("CLS");
	
	printf("\n");
	printf("	   Banco Devedores		\n\n");
    printf("		  SYSCofre	 	    \n\n");
	
	printf("\n=============================\n");
	printf("Listagem Conta Corrente");
	
	int i;
	int numAgencia, numConta, dtAbDia, dtAbMes, dtAbAno, diaNasc, mesNasc, anoNasc;
	float saldo;
	char cpfTitular[12], nome[60], endereco[60];
	
	qtdContas = ContaCorrente::RecuperarQtdContas();
	
	if (qtdContas == 0) {
		printf("\n=============================\n");
	 	printf("\nNao ha contas deste tipo no momento\n\n");
	 	system("PAUSE");
	 }
	 
	for(i = 0; i < qtdContas; i++) {
		printf("\n=============================\n");
		vetorCc[i]->RecuperarConta(&numAgencia, &numConta, &dtAbDia, &dtAbMes, &dtAbAno, &saldo, 
					   cpfTitular, nome, &diaNasc, &mesNasc, &anoNasc, endereco);
		printf("\nDados do Cliente\n");
		printf("\nCPF: %s", cpfTitular);
		printf("\nNome: %s", nome);
		printf("\nData de Nascimento: %d/%d/%d", diaNasc, mesNasc, anoNasc);
		printf("\nEndereco: %s", endereco);	
		printf("\n\n-------------------------\n\n");		   
		printf("Conta de %s\n", nome);
		printf("\nAgencia: %d", numAgencia);
		printf("\nConta: %d", numConta);
		printf("\nData de Abertura: %d/%d/%d", dtAbDia, dtAbMes, dtAbAno);
		printf("\nSaldo: R$%.1f", saldo);

		printf("\n\n=============================\n\n");
		system("PAUSE");
	}
	
}
