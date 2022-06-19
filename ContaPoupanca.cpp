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

// Arquivo: ContaPoupanca.cpp

#include <stdio.h>
#include <stdlib.h>

#include "ContaBancaria.h"

//***********************************
// ao implementar cada metodo, 
// SUBSTITUIR o codigo DISPONIBILIZADO
// pelo codigo ADEQUADO 
//***********************************



//***********************************
// ContaPoupanca
//***********************************

ContaPoupanca* vetorCp[10];

float ContaPoupanca::txRendimento = 0.5; 
int   ContaPoupanca::qtdContas = 0; 



//***********************************
// Metodos primitivos 
//***********************************


ContaPoupanca::ContaPoupanca (Cliente* titular):ContaBancaria(titular) {
	
		printf("\nInforme dados da poupanca:");
	
  		printf("\nDia do Rendimento: ");
		scanf("%d", &diaRendimento);
		
		printf("\n=============================\n");
		printf("Abertura feita com sucesso!!!");
		printf("\n=============================\n\n");
		system("PAUSE");	
}

 float ContaPoupanca::ObterTxRendimento (void) {
 	
  		return ContaPoupanca::txRendimento;

}

int ContaPoupanca::RecuperarQtdContas (void) {
	
  		return ContaPoupanca::qtdContas;

}	  

void ContaPoupanca::IncrementarQtdContas (void) {
	
  		ContaPoupanca::qtdContas++;	
}


//***********************************
// Metodos derivados 
//***********************************

	  
void ContaPoupanca::RecuperarConta (int* ag, int* ct, 
                                    int* dAbDia, int* dAbMes, int* dAbAno,
                                    float* sdo, 
								    char titCpf [12], char titNome [60],             
                                    int* titNascDia, int* titNascMes, int* titNascAno, 
                                    char titEndereco [60], 
									int* diaRend, float* taxa) {


		*diaRend = diaRendimento;
        *taxa = ContaPoupanca::ObterTxRendimento();
       	ContaBancaria::RecuperarConta(ag, ct, dAbDia, dAbMes, dAbAno, sdo, titCpf, titNome, titNascDia, titNascMes, titNascAno, titEndereco);


}  
      
 void ContaPoupanca::AbrirConta (Cliente* titular)  {
 	
	// este mÃ©todo cria objeto do tipo ContaPoupanca
	// e insere Conta Poupanca no respectivo vetor
		
	 	int i;
			
		qtdContas = ContaPoupanca::RecuperarQtdContas();
		
		if (qtdContas < 10) {
			i = qtdContas;
			vetorCp[i] = new ContaPoupanca(titular);
			ContaPoupanca::IncrementarQtdContas();
		}
	 	
}

 void ContaPoupanca::AberturaConta (void) {
 	
 	system("CLS");
 	
 	printf("\n");
	printf("	   Banco Devedores		\n\n");
    printf("		  SYSCofre	 	    \n\n");
 	
 	printf("\n=============================\n");
	printf("Abertura Conta Poupanca");

  	 Cliente* titular;
	 
	 qtdContas = ContaPoupanca::RecuperarQtdContas();
	 
	 if(qtdContas == 10) {
	 	printf("\nNao estamos abrindo contas desse tipo no momento\n\n");
	 	system("PAUSE");
	 	return;
	 }	
	 
	 titular = Cliente::ObterCliente();
	 
	 if (titular != NULL) {
	 	ContaPoupanca::AbrirConta(titular);
	 }
	 
}
    
void ContaPoupanca::Listagem (void) {
	
	system("CLS");
	
	printf("\n");
	printf("	   Banco Devedores		\n\n");
    printf("		  SYSCofre	 	    \n\n");
	
	printf("\n=============================\n");
	printf("Listagem Conta Poupanca");
	
  	int i;
	int numAgencia, numConta, dtAbDia, dtAbMes, dtAbAno, diaNasc, mesNasc, anoNasc, diaRend;
	float saldo, taxa;
	char cpfTitular[12], nome[60], endereco[60];
	
	qtdContas = ContaPoupanca::RecuperarQtdContas();
	
	if (qtdContas == 0) {
		printf("\n=============================\n");
	 	printf("\nNao ha contas deste tipo no momento\n\n");
	 	system("PAUSE");
	 }
	 
	for(i = 0; i < qtdContas; i++) {
		printf("\n=============================\n");
		vetorCp[i]->RecuperarConta(&numAgencia, &numConta, &dtAbDia, &dtAbMes, &dtAbAno, &saldo, 
					   cpfTitular, nome, &diaNasc, &mesNasc, &anoNasc, endereco, &diaRend, &taxa);
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
		printf("\nDia do Rendimento: %d", diaRend);
		printf("\nTaxa: %.1f%%", taxa);

		printf("\n\n=============================\n\n");
		system("PAUSE");
	}
	
}
