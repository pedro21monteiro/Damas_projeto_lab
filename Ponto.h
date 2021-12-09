#pragma once
#include <fstream>
#include <iostream>
#include <string>
#include <time.h> 
using namespace std;

class Ponto
{
private:
	int x;
	int y;
public:
	Ponto();
	Ponto(int _x,int _y);

	int Getx() const;
	int Gety() const;

	void Inserirx();
	void Inseriry();

	~Ponto();
};

