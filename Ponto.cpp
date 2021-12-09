#include "Ponto.h"



Ponto::Ponto()
{
	x = 0;
	y = 0;
}


Ponto::Ponto(int _x, int _y)
{
	x = _x;
	y = _y;
}

int Ponto::Getx() const
{
	return x;
}

int Ponto::Gety() const
{
	return y;
}

void Ponto::Inserirx()
{
	//Iremos considerar o x as linhas
	cin >> x;

}

void Ponto::Inseriry()
{
	//Iremos considerar o y as colunas
	cin >> y;
}

Ponto::~Ponto()
{
}
