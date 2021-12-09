#pragma once
#include <fstream>
#include <iostream>
#include <string>

using namespace std;
class Jogador
{
private:
	string nome;

public:
	Jogador();
	Jogador(string _nome);

	
	void DefinirJogador(int i);
	
	string GetNome();

	~Jogador();
};

