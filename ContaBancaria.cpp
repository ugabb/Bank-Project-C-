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

// Arquivo: ContaBancaria.cpp

#include <stdio.h>
#include <stdlib.h>

#include "ContaBancaria.h"

//***********************************
// ao implementar cada metodo, 
// SUBSTITUIR o codigo DISPONIBILIZADO
// pelo codigo ADEQUADO 
//***********************************


//***********************************
// ContaBancaria
//***********************************


//***********************************
// Metodos primitivos 
//***********************************

ContaBancaria::ContaBancaria (Cliente* cliPonteiro)  {
	
		
  		titular = cliPonteiro;
		
		printf("\nInforme os dados da conta:");
		
		printf("\nAgencia: ");
		scanf("%d", &numAgencia);		
		
		printf("Numero: ");
		scanf("%d", &numConta);	
			
		printf("Saldo: ");
		scanf("%f", &saldo);	
	
		printf("Data de Abertura:");
		printf("\n\tDia: ");
		scanf("%d", &dtAbDia);	
	  
		
		printf("\tMes: ");
		scanf("%d", &dtAbMes);
	
		
		printf("\tAno: ");
		scanf("%d", &dtAbAno);	
				
}


//***********************************
// Metodos derivados 
//***********************************

void ContaBancaria::RecuperarConta (int* ag, int* ct, 
		                            int* dAbDia, int* dAbMes, int* dAbAno, 
								    float* sdo, char titCpf[12], char titNome[60],  
								    int* titNascDia, int* titNascMes, int* titNascAno, 
								    char titEndereco[60])   {												    	
  				
		*ag = numAgencia;
  		*ct  = numConta;
  		*dAbDia = dtAbDia;
  		*dAbMes = dtAbMes;
  		*dAbAno = dtAbAno;
        *sdo = saldo;
        
       	titular->RecuperarCliente(titCpf, titNome, titNascDia, titNascMes, titNascAno, titEndereco);
       	

 }	
