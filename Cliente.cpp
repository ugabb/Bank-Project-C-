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

// Arquivo: Cliente.cpp

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "ContaBancaria.h"

//***********************************
// ao implementar cada metodo, 
// SUBSTITUIR o codigo DISPONIBILIZADO
// pelo codigo ADEQUADO 
//***********************************


//***********************************
// Cliente
//***********************************

Cliente* vetorCli[10];
 
int Cliente::qtdClientes = 0;


//***********************************
// Metodos primitivos 
//***********************************

Cliente::Cliente (char cpfTitular  [12]) {
		

		strcpy(cpf, cpfTitular); 	
		printf("\nInforme dados do cliente: ");
		
		printf("\nNome: ");
		scanf("%s", nome);

		
		printf("Endereco: ");
		scanf("%s", endereco);
	
		printf("Data de Nascimento: ");
		printf("\n\tDia: ");
		scanf("%d", &dtNascDia);
	
		
		printf("\tMes: ");
		scanf("%d", &dtNascMes);
	
		
		printf("\tAno: ");
		scanf("%d", &dtNascAno);
		
}

int Cliente::VerificarCliente (char cpfTitular [12]) {
				
	if (strcmp(cpfTitular,cpf) == 0) {
		return 1;
	} else {
		return 0;
	}	
	
}

int Cliente::RecuperarQtdClientes (void) {
	
	return Cliente::qtdClientes;

}	  

void Cliente::IncrementarQtdClientes (void) {
	Cliente::qtdClientes++;
}

void Cliente::RecuperarCliente (char cliCpf[12], char cliNome[60], 
			                    int* cliNascDia, int* cliNascMes, int* cliNascAno, 
								char cliEnder[60])  {
									
	strcpy(cliCpf, cpf);
	strcpy(cliNome, nome);	
	strcpy(cliEnder, endereco);				
	*cliNascDia = dtNascDia;					
	*cliNascMes = dtNascMes;
	*cliNascAno = dtNascAno;
}

//***********************************
// Metodos derivados 
//***********************************

Cliente* Cliente::VerificarExistenciaCliente (char cpfTitular [12]) {
	
    Cliente* titular = NULL;
    int qtd;
	int i;
	
	qtd = Cliente::RecuperarQtdClientes();
	
    for(i = 0; i < qtd; i++){
        if (vetorCli[i]->VerificarCliente(cpfTitular)){
            titular = vetorCli[i];
            break; 
        }
    }
    return titular; 
}
     
Cliente* Cliente::ObterCliente (void) {
	
	// este mÃ©todo cria objeto do tipo cliente
	// e insere cliente no respectivo vetor
	
		char cpfTitular [12];
		Cliente* titular = NULL;
		int i;
		printf("\n=============================\n");
		printf("\nInforme o CPF do titular: ");
		scanf("%s", cpfTitular);
	
		qtdClientes = Cliente::RecuperarQtdClientes();
	
		if(qtdClientes != 0){
			titular = Cliente::VerificarExistenciaCliente(cpfTitular);
		}
		
		if(titular == NULL && qtdClientes == 10){
			printf("Nao estamos aceitando novos clientes no momento");
			system("PAUSE");
			return NULL;
		}
		
		if(qtdClientes < 10 && titular == NULL){
			i = qtdClientes;
			vetorCli[i] = new Cliente(cpfTitular);
			Cliente::IncrementarQtdClientes();
			titular = vetorCli[i];
		}
	
	    return titular;
}    	 	  	  
