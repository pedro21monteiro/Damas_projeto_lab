#pragma once
#include <fstream>
#include <iostream>
#include <string>
#include "Ponto.h"

using namespace std;
class peca
{
private:
	Ponto Inicial;
	Ponto Final;

public:
	peca();
	~peca();

	void InserirPosicaoIniciaeFinal();
	int GetInicialx() const;
    int GetInicialy() const;
	int GetFinalx() const;
	int GetFinaly() const;
};

