#pragma once
#include "Jogador.h"
#include "peca.h"
#include <fstream>
#include <iostream>
#include <string>
#include <time.h> 
using namespace std;

class Tabuleiro
{
private:
	char tabuleiro[8][8];
	int aleatorio;
	Jogador Um;
	Jogador Dois;
	int Pretas;
	int Brancas;
	peca Branca;
	peca Preta;
    
	
public:
	Tabuleiro();
    ~Tabuleiro();
	void ImprimirTabuleiro(int a);
	void InserirTabuleiroInicial();
	void DefinirJogadorTabuleiro();

	void Aleatorio();
	int GetAleatorio() const;
	

	void DizerPecaJogador(int a);
	char GetTabuleiroij(int i,int j);
	void SetNumeroBrancas();
	void SetNumeroPretas();

	int GetNumeroBrancas() const;
	int GetNumeroPretas() const;

	

	int GetValorPosicao(int a,int b) const;

	void InserirPosicoesMovimentosPecaBrancas(int a);
	void InserirPosicoesMovimentosPecaPretas(int a);
	int VerificarMovimentoBranca() const;
	int VerificarMovimentoPreta() const;

	void AlterarTabuleiroBranca(int a);
	void AlterarTabuleiroPreta(int a);

	//funçao experimental
	void ExperimentaeAlterarTabuleiro();
	void TransformarEmDama();
	
	
};

