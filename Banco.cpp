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

#include "Banco.h"

#include "ContaBancaria.h"

/*	Op��es do menu Conta Corrente	*/

void Banco::AberturaContaCorrente(void) {
	ContaCorrente::AberturaConta();
}

void Banco::ListagemContasCorrentes(void) {
	ContaCorrente::Listagem();	
}

/*	Op��es do menu Conta Poupan�a	*/

void Banco::AberturaContaPoupanca(void) {
	ContaPoupanca::AberturaConta();
}

void Banco::ListagemContasPoupanca(void) {
	ContaPoupanca::Listagem();
}
