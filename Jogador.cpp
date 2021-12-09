#include "Jogador.h"



Jogador::Jogador()
{
	nome = '0';
}

Jogador::Jogador(string _nome)
{
	nome = _nome;
}


void Jogador::DefinirJogador(int i)
{
	
	cout << "Insira o nome do jogador "<<i<<":"<<endl;
	cin >> nome;

}



string Jogador::GetNome()
{
	return string(nome);
}

Jogador::~Jogador()
{
}
