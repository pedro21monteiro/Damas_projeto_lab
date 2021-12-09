#include "peca.h"



peca::peca()
{
}


peca::~peca()
{
}


void peca::InserirPosicaoIniciaeFinal()
{
	cout << "Insira a linha da peca que quer movimentar" << endl;
	Inicial.Inserirx();
	cout << "Insira a coluna da peca que quer movimentar" << endl;
	Inicial.Inseriry();
	cout << "Insira a linha para onde quer que a peca se movimente" << endl;
	Final.Inserirx();
	cout << "Insira a coluna para onde quer que a peca se movimente" << endl;
	Final.Inseriry();
}

int peca::GetInicialx() const
{
	return Inicial.Getx();
}

int peca::GetInicialy() const
{
	return Inicial.Gety();
}

int peca::GetFinalx() const
{
	return Final.Getx();
}

int peca::GetFinaly() const
{
	return Final.Gety();
}

