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

#include "Banco.h"

#include "ContaBancaria.h"

/*	Opções do menu Conta Corrente	*/

void Banco::AberturaContaCorrente(void) {
	ContaCorrente::AberturaConta();
}

void Banco::ListagemContasCorrentes(void) {
	ContaCorrente::Listagem();	
}

/*	Opções do menu Conta Poupança	*/

void Banco::AberturaContaPoupanca(void) {
	ContaPoupanca::AberturaConta();
}

void Banco::ListagemContasPoupanca(void) {
	ContaPoupanca::Listagem();
}
