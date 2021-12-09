#include <fstream>
#include <iostream>
#include <string>
#include <ctime>
#include "Jogo.h"


int main(void) {
	//o menu é o inicio do jogo; a unica maneira de sair do menu é clicar em jogar
	
	Jogo Inicio;


	Inicio.menu();

//sai do menu e começa a jogar
		//Pede o nome dos dois jogadores que vão jogar
//aleatoriamente será atribuido uma peça a um jogador
	//atribuir as pecas aos jogadores
	//diz que peça vai jogar cada jpgador;

	Inicio.InserirDadosEDarPecasJogadores();

	//fazer o tabuleiro
	Inicio.DefinirTabuleiroInicia();

	

	
	//apartir daqui vai começar o jogo
	Inicio.ContarBrancasePretas();//fazer a contagem antes do jogo


	while (Inicio.VerificarSeAcabouJogo() == 1) {//enquanto o jogo não acabar vai repetir esta sequencia
		//jogador que tem as brancas joga
		Inicio.JogarBrancas();

		if (Inicio.VerificarMovimentoBrancaJogo() == 0) {
			while (Inicio.VerificarMovimentoBrancaJogo() == 0) {//enquanto o movimento for inválido vai repetir isto
				cout << "Movimento invaldo" << endl;
				system("pause");
				Inicio.JogarBrancas();
				Inicio.TransformarDamas();
			}
			Inicio.ExecutarTipoMovimentoBranca();
			Inicio.TransformarDamas();
		}
		else { Inicio.ExecutarTipoMovimentoBranca();
		Inicio.TransformarDamas();
		}
		//terá de ser criada funçao para ver se alguma peça se tornou dama nesse ponto
	
		Inicio.JogarPretas();
		if (Inicio.VerificarMovimentoPretaJogo() == 0) {
			while (Inicio.VerificarMovimentoPretaJogo() == 0) {//enquanto o movimento for inválido vai repetir isto
				cout << "Movimento invaldo" << endl;
				system("pause");
				Inicio.JogarPretas();
			}
			Inicio.ExecutarTipoMovimentoPreta();
			Inicio.TransformarDamas();
		}
		else { 
			Inicio.ExecutarTipoMovimentoPreta();
		    Inicio.TransformarDamas();
		}
		//para verificar no while se as pecas estao a zero temos de no final de cada while contar as pecas
		Inicio.ContarBrancasePretas();
	}
	
	system("pause");
	exit(0);
}