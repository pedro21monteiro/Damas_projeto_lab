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
	//esta funçao é apenas para verificar se a funçao contar esta a funcionar,não ira
	//contribuir para o jogo
	void VerificarFuncaoContar();

	int VerificarMovimentoBrancaJogo() const;
	int VerificarMovimentoPretaJogo() const;

	void ExecutarTipoMovimentoBranca();
	void ExecutarTipoMovimentoPreta();
	//funçao de experimentaçao
	void _ExperimentarAlterarTabuleiro();
	void TransformarDamas();
	
	Tabuleiro Getjogar();
	~Jogo();
};

