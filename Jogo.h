#pragma once
#include <fstream>
#include <string>
#include <iostream>
#include "Tabuleiro.h"

using namespace std;
class Jogo
{
private:
	Tabuleiro jogar;
public:
	Jogo();

	void menu();
	void DefinirTabuleiroInicia();
	void InserirDadosEDarPecasJogadores();
	int VerificarSeAcabouJogo() const;
	void ImprimirTabuleiroUm();
	void JogarBrancas();
	void JogarPretas();
	void ContarBrancasePretas();
	//esta fun�ao � apenas para verificar se a fun�ao contar esta a funcionar,n�o ira
	//contribuir para o jogo
	void VerificarFuncaoContar();

	int VerificarMovimentoBrancaJogo() const;
	int VerificarMovimentoPretaJogo() const;

	void ExecutarTipoMovimentoBranca();
	void ExecutarTipoMovimentoPreta();
	//fun�ao de experimenta�ao
	void _ExperimentarAlterarTabuleiro();
	void TransformarDamas();
	
	Tabuleiro Getjogar();
	~Jogo();
};

