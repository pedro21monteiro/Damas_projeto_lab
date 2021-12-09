#include "Tabuleiro.h"


Tabuleiro::Tabuleiro()
{

}




void Tabuleiro::ImprimirTabuleiro(int a)
{
	int i, j;

	if (a == 0) {
		cout << Um.GetNome() << endl << endl;
	for (i = 0;i < 8;i++) {
		cout << i << "  |";
		for (j = 0;j < 8;j++) {

			cout << tabuleiro[i][j] << "|";
		}cout << endl;
	}
	cout << "    0 1 2 3 4 5 6 7";
	cout << endl << endl;
	cout << Dois.GetNome() << endl << endl;
}
	if (a == 1) {
		cout << Dois.GetNome() << endl << endl;
		for (i = 0;i < 8;i++) {
			cout << i << "  |";
			for (j = 0;j < 8;j++) {

				cout << tabuleiro[i][j] << "|";
			}cout << endl;
		}
		cout << "    0 1 2 3 4 5 6 7";
		cout << endl << endl;
		cout << Um.GetNome() << endl << endl;

	}
}

void Tabuleiro::InserirTabuleiroInicial() {
	
	tabuleiro[0][0] = 'X';
	tabuleiro[0][1] = ' ';
	tabuleiro[0][2] = 'X';
	tabuleiro[0][3] = ' ';
	tabuleiro[0][4] = 'X';
	tabuleiro[0][5] = ' ';
	tabuleiro[0][6] = 'X';
	tabuleiro[0][7] = ' ';
	tabuleiro[1][0] = ' ';
	tabuleiro[1][1] = 'X';
	tabuleiro[1][2] = ' ';
	tabuleiro[1][3] = 'X';
	tabuleiro[1][4] = ' ';
	tabuleiro[1][5] = 'X';
	tabuleiro[1][6] = ' ';
	tabuleiro[1][7] = 'X';
	tabuleiro[2][0] = 'X';
	tabuleiro[2][1] = ' ';
	tabuleiro[2][2] = 'X';
	tabuleiro[2][3] = ' ';
	tabuleiro[2][4] = 'X';
	tabuleiro[2][5] = ' ';
	tabuleiro[2][6] = 'X';
	tabuleiro[2][7] = ' ';
	tabuleiro[3][0] = ' ';
	tabuleiro[3][1] = ' ';
	tabuleiro[3][2] = ' ';
	tabuleiro[3][3] = ' ';
	tabuleiro[3][4] = ' ';
	tabuleiro[3][5] = ' ';
	tabuleiro[3][6] = ' ';
	tabuleiro[3][7] = ' ';
	tabuleiro[4][0] = ' ';
	tabuleiro[4][1] = ' ';
	tabuleiro[4][2] = ' ';
	tabuleiro[4][3] = ' ';
	tabuleiro[4][4] = ' ';
	tabuleiro[4][5] = ' ';
	tabuleiro[4][6] = ' ';
	tabuleiro[4][7] = ' ';
	tabuleiro[5][0] = ' ';
	tabuleiro[5][1] = 'O';
	tabuleiro[5][2] = ' ';
	tabuleiro[5][3] = 'O';
	tabuleiro[5][4] = ' ';
	tabuleiro[5][5] = 'O';
	tabuleiro[5][6] = ' ';
	tabuleiro[5][7] = 'O';
	tabuleiro[6][0] = 'O';
	tabuleiro[6][1] = ' ';
	tabuleiro[6][2] = 'O';
	tabuleiro[6][3] = ' ';
	tabuleiro[6][4] = 'O';
	tabuleiro[6][5] = ' ';
	tabuleiro[6][6] = 'O';
	tabuleiro[6][7] = ' ';
	tabuleiro[7][0] = ' ';
	tabuleiro[7][1] = 'O';
	tabuleiro[7][2] = ' ';
	tabuleiro[7][3] = 'O';
	tabuleiro[7][4] = ' ';
	tabuleiro[7][5] = 'O';
	tabuleiro[7][6] = ' ';
	tabuleiro[7][7] = 'O';
	
}

void Tabuleiro::DefinirJogadorTabuleiro()
{
	Um.DefinirJogador(1);
	Dois.DefinirJogador(2);
}

void Tabuleiro::Aleatorio() 
{
	int b;
	srand(time(NULL));
	b = rand() % 2;

	aleatorio = b;
}

int Tabuleiro::GetAleatorio() const
{
	return aleatorio;
}

void Tabuleiro::DizerPecaJogador(int a)
{
	cout << endl << endl;
	if (a == 0) {
		cout << "Aletoriamente calhou:\n"<<Um.GetNome()<<" - X (Pretas)\n"<<Dois.GetNome()<< "- O(Brancas)\n\n";
	}if (a == 1) {
		cout << "Aletoriamente calhou:\n"<<Um.GetNome()<<"- O(Brancas)\n" << Dois.GetNome() << "- X(Pretas)\n\n";
	}
	system("pause");
	system("cls");
}

char Tabuleiro::GetTabuleiroij(int i,int j)
{
	return tabuleiro[i][j];
}

void Tabuleiro::SetNumeroBrancas()
{
	int i, j;
	int brancas = 0;
	for (i = 0;i < 8;i++) {
		for (j = 0;j < 8;j++) {
			if (tabuleiro[i][j] == 'O' || tabuleiro[i][j] == 'B') {
				brancas++;
			}
	}
	}
	Brancas = brancas;
}

void Tabuleiro::SetNumeroPretas()
{
	int i, j;
	int pretas = 0;
	for (i = 0;i < 8;i++) {
		for (j = 0;j < 8;j++) {
			if (tabuleiro[i][j] == 'X' || tabuleiro[i][j] == 'P') {
				pretas++;
			}
		}
	}
	Pretas = pretas;
}

int Tabuleiro::GetNumeroBrancas() const
{
	return Brancas;
}

int Tabuleiro::GetNumeroPretas() const
{
	return Pretas;
}

int Tabuleiro::GetValorPosicao(int a, int b) const
{
	if (tabuleiro[a][b] == ' ') {
		return 0;
	}if (tabuleiro[a][b] == 'X') {
		return 1;
	}if (tabuleiro[a][b] == 'O') {
		return 2;
	}
}

void Tabuleiro::InserirPosicoesMovimentosPecaBrancas(int a)
{
	if (a == 0) {
		cout << Dois.GetNome() << " e a sua vez de jogar" << endl;
		Branca.InserirPosicaoIniciaeFinal();
	}if (a == 1) {
		cout << Um.GetNome() << " e a sua vez de jogar" << endl;
		Branca.InserirPosicaoIniciaeFinal();
	}
}

void Tabuleiro::InserirPosicoesMovimentosPecaPretas(int a)
{
	if (a == 0) {
		cout << Um.GetNome() << " e a sua vez de jogar" << endl;
		Preta.InserirPosicaoIniciaeFinal();
	}if (a == 1) {
		cout << Dois.GetNome() << " e a sua vez de jogar" << endl;
		Preta.InserirPosicaoIniciaeFinal();
	}
}

int Tabuleiro::VerificarMovimentoBranca() const
{
	//em vez de fazer os movimentos corretos, vou fazer os inválidos
	//Se a peça escolhida não for branca retorna erro
	//if (tabuleiro[Branca.GetInicialx()][Branca.GetInicialy()] != 'O' 
	//	|| tabuleiro[Branca.GetInicialx()][Branca.GetInicialy()] != 'B') {
	//	return 0;
	//}
	////se a posiçai final escolhida nao estiver vazia retorna erro
	//if (tabuleiro[Branca.GetFinalx()][Branca.GetFinaly()] != ' '
	//	|| tabuleiro[Branca.GetFinalx()][Branca.GetFinaly()] != ' ') {
	//	return 0;
	//}
	//// se a peca for branca 'O' e nao se movimentar 1 ou duas linhas para cima dá erro
	//if (tabuleiro[Branca.GetInicialx()][Branca.GetInicialy()] == 'O'
	//	&& (Branca.GetInicialx() != Branca.GetFinalx() - 1
	//		|| Branca.GetInicialx() != Branca.GetFinalx() - 2)) {
	//	return 0;
	//}
	//// se a peca for branca 'O' e nao se movimentar 1 ou 2 coluna para a esquerda 
	////ou 1 ou 2 couluna para direita
	//if (tabuleiro[Branca.GetInicialx()][Branca.GetInicialy()] == 'O'
	//	&& ((Branca.GetInicialy() != Branca.GetFinaly() + 1 || Branca.GetInicialy() != Branca.GetFinaly() + 2)) ||
	//	(Branca.GetInicialy() != Branca.GetFinaly() + 1 || Branca.GetInicialy() != Branca.GetFinaly() + 2)) {
	//	return 0;

	//Iremos verificar se o movimento é possivel pois acupa menos codigo

	//implemntar uma funcao para a dama
	int variaX, variaY,NumeroDeCasasEntrePontos;//
	int i;
	int NumeroBrancas = 0;
	int NumeroPretas = 0;

	variaX = Branca.GetFinalx() - Branca.GetInicialx(); // o vaia x tambem vai dar a distacia entre eles
	variaY = Branca.GetFinaly() - Branca.GetInicialy(); // e como é diagonal vai ser igual á distancia y
	
	if (variaX < 0) {
		NumeroDeCasasEntrePontos = -variaX -1 ;
	}if (variaX > 0) {
		NumeroDeCasasEntrePontos = variaX -1;
	}

	// tenho de criar uma funçao para ver o numero de pretas que existe entre o ponto inicia e o ponto final
    // existe 4 direçoes possivel logo vamos ter de fazer 4 if
	// tambem nao podemos passar por nenhuma das minhas
	//este é o movimento para a diagonal superior esquerda
	if (variaX < 0 && variaY < 0) {
		for (i = 1;i <= NumeroDeCasasEntrePontos;i++) {
			if (tabuleiro[Branca.GetInicialx() - i][Branca.GetInicialy() - i] == 'O' ||
				tabuleiro[Branca.GetInicialx() - i][Branca.GetInicialy() - i] == 'B') {
				NumeroBrancas++;
			}
		}for (i = 1;i <= NumeroDeCasasEntrePontos;i++) {
			if (tabuleiro[Branca.GetInicialx() - i][Branca.GetInicialy() - i] == 'X' ||
				tabuleiro[Branca.GetInicialx() - i][Branca.GetInicialy() - i] == 'P') {
				NumeroPretas++;
			}
		}
	}//este é o movimento para a diagonal superior direita
	if (variaX < 0 && variaY > 0) {
		for (i = 1;i <= NumeroDeCasasEntrePontos;i++) {
			if (tabuleiro[Branca.GetInicialx() - i][Branca.GetInicialy() + i] == 'O' ||
				tabuleiro[Branca.GetInicialx() - i][Branca.GetInicialy() + i] == 'B') {
				NumeroBrancas++;
			}
		}for (i = 1;i <= NumeroDeCasasEntrePontos;i++) {
			if (tabuleiro[Branca.GetInicialx() - i][Branca.GetInicialy() + i] == 'X' ||
				tabuleiro[Branca.GetInicialx() - i][Branca.GetInicialy() + i] == 'P') {
				NumeroPretas++;
			}
		}
	}//este é o movimento para a diagonal inferor esquerda
	if (variaX > 0 && variaY < 0) {
		for (i = 1;i <= NumeroDeCasasEntrePontos;i++) {
			if (tabuleiro[Branca.GetInicialx() + i][Branca.GetInicialy() - i] == 'O' ||
				tabuleiro[Branca.GetInicialx() + i][Branca.GetInicialy() - i] == 'B') {
				NumeroBrancas++;
			}
		}for (i = 1;i <= NumeroDeCasasEntrePontos;i++) {
			if (tabuleiro[Branca.GetInicialx() + i][Branca.GetInicialy() - i] == 'X' ||
				tabuleiro[Branca.GetInicialx() + i][Branca.GetInicialy() - i] == 'P') {
				NumeroPretas++;
			}
		}
	}//este é o movimento para a diagonal inferor direita
	if (variaX > 0 && variaY < 0) {
		for (i = 1;i <= NumeroDeCasasEntrePontos;i++) {
			if (tabuleiro[Branca.GetInicialx() + i][Branca.GetInicialy() + i] == 'O' ||
				tabuleiro[Branca.GetInicialx() + i][Branca.GetInicialy() + i] == 'B') {
				NumeroBrancas++;
			}
		}for (i = 1;i <= NumeroDeCasasEntrePontos;i++) {
			if (tabuleiro[Branca.GetInicialx() + i][Branca.GetInicialy() + i] == 'X' ||
				tabuleiro[Branca.GetInicialx() + i][Branca.GetInicialy() + i] == 'P') {
				NumeroPretas++;
			}
		}
	}

	//este sera o movimento sem captura para a diagonal direita ou esquerda sem capturae ira dar return do 1
	
	if ((tabuleiro[Branca.GetInicialx()][Branca.GetInicialy()] == 'O') &&
		(tabuleiro[Branca.GetFinalx()][Branca.GetFinaly()] == ' ') &&
		((Branca.GetInicialx() == (Branca.GetFinalx() + 1) && Branca.GetInicialy() == Branca.GetFinaly() - 1)
			|| (Branca.GetInicialx() == (Branca.GetFinalx() + 1) && Branca.GetInicialy() == Branca.GetFinaly() + 1))) {
		return 1;
	}//este sera o movimento com captura para a diagonal direita ou esquerda e ira dar return 2 para O
	if ((((tabuleiro[Branca.GetInicialx()][Branca.GetInicialy()] == 'O')
		&& (tabuleiro[Branca.GetFinalx()][Branca.GetFinaly()] == ' ')
		&& (tabuleiro[Branca.GetInicialx() - 1][Branca.GetInicialy() - 1] == 'X')
		) || ((tabuleiro[Branca.GetInicialx()][Branca.GetInicialy()] == 'O')
			&& (tabuleiro[Branca.GetFinalx()][Branca.GetFinaly()] == ' ')
			&& (tabuleiro[Branca.GetInicialx() - 1][Branca.GetInicialy() + 1] == 'X')
			))
		&& ((Branca.GetInicialx() == (Branca.GetFinalx() + 2) && Branca.GetInicialy() == Branca.GetFinaly() - 2)
			|| (Branca.GetInicialx() == (Branca.GetFinalx() + 2) && Branca.GetInicialy() == Branca.GetFinaly() + 2))) {
		return 2;
	}//esta condiçao é para verificar o movimento da B
	if ((tabuleiro[Branca.GetInicialx()][Branca.GetInicialy()] == 'B') &&
		(tabuleiro[Branca.GetFinalx()][Branca.GetFinaly()] == ' ') &&
		(NumeroBrancas == 0 ) && (NumeroPretas == 1)
		) {
		return 3;
	}
}

int Tabuleiro::VerificarMovimentoPreta() const
{
	if ((tabuleiro[Preta.GetInicialx()][Preta.GetInicialy()] == 'X') &&
		(tabuleiro[Preta.GetFinalx()][Preta.GetFinaly()] == ' ') &&
		((Preta.GetInicialx() == (Preta.GetFinalx() - 1) && Preta.GetInicialy() == Preta.GetFinaly() - 1)
			|| (Preta.GetInicialx() == (Preta.GetFinalx() - 1) && Preta.GetInicialy() == Preta.GetFinaly() + 1))) {
		return 1;
	}//este sera o movimento com captura para a diagonal direita ou esquerda e ira dar return 2 para X
	if ((((tabuleiro[Preta.GetInicialx()][Preta.GetInicialy()] == 'X')
		&& (tabuleiro[Preta.GetFinalx()][Preta.GetFinaly()] == ' ')
		&& (tabuleiro[Preta.GetInicialx() + 1][Preta.GetInicialy() - 1] == 'O')
		) || ((tabuleiro[Preta.GetInicialx()][Preta.GetInicialy()] == 'X')
			&& (tabuleiro[Preta.GetFinalx()][Preta.GetFinaly()] == ' ')
			&& (tabuleiro[Preta.GetInicialx() + 1][Preta.GetInicialy() + 1] == 'O')
			))
		&& ((Preta.GetInicialx() == (Preta.GetFinalx() - 2) && Preta.GetInicialy() == Preta.GetFinaly() - 2)
			|| (Preta.GetInicialx() == (Preta.GetFinalx() - 2) && Preta.GetInicialy() == Preta.GetFinaly() + 2))) {
		return 2;
	}// temos de alterar este ainda
	if ((((tabuleiro[Preta.GetInicialx()][Preta.GetInicialy()] == 'X')
		&& (tabuleiro[Preta.GetFinalx()][Preta.GetFinaly()] == ' ')
		&& (tabuleiro[Preta.GetInicialx() + 1][Preta.GetInicialy() - 1] == 'O')
		) || ((tabuleiro[Preta.GetInicialx()][Preta.GetInicialy()] == 'X')
			&& (tabuleiro[Preta.GetFinalx()][Preta.GetFinaly()] == ' ')
			&& (tabuleiro[Preta.GetInicialx() + 1][Preta.GetInicialy() + 1] == 'O')
			))
		&& ((Preta.GetInicialx() == (Preta.GetFinalx() - 2) && Preta.GetInicialy() == Preta.GetFinaly() - 2)
			|| (Preta.GetInicialx() == (Preta.GetFinalx() - 2) && Preta.GetInicialy() == Preta.GetFinaly() + 2))) {
		return 2;
	}
	else {
		return 0;
	}

}

void Tabuleiro::AlterarTabuleiroBranca(int a)
{
	//funçao para ver qual a unica preta
	int variaX, variaY, NumeroDeCasasEntrePontos;//
	int i;
	int x=8, y=8;
	variaX = Branca.GetFinalx() - Branca.GetInicialx(); // o vaia x tambem vai dar a distacia entre eles
	variaY = Branca.GetFinaly() - Branca.GetInicialy(); // e como é diagonal vai ser igual á distancia y

	if (variaX < 0) {
		NumeroDeCasasEntrePontos = -variaX - 1;
	}if (variaX > 0) {
		NumeroDeCasasEntrePontos = variaX - 1;
	}

	// tenho de criar uma funçao para ver o numero de pretas que existe entre o ponto inicia e o ponto final
	// existe 4 direçoes possivel logo vamos ter de fazer 4 if
	// tambem nao podemos passar por nenhuma das minhas
	//este é o movimento para a diagonal superior esquerda
	if (variaX < 0 && variaY < 0) {
		
		for (i = 1;i <= NumeroDeCasasEntrePontos;i++) {
			if (tabuleiro[Branca.GetInicialx() - i][Branca.GetInicialy() - i] == 'X' ||
				tabuleiro[Branca.GetInicialx() - i][Branca.GetInicialy() - i] == 'P') {
				x = Branca.GetInicialx() - i;
				y = Branca.GetInicialy() - i;
			}
		}
	}//este é o movimento para a diagonal superior direita
	if (variaX < 0 && variaY > 0) {
    for (i = 1;i <= NumeroDeCasasEntrePontos;i++) {
			if (tabuleiro[Branca.GetInicialx() - i][Branca.GetInicialy() + i] == 'X' ||
				tabuleiro[Branca.GetInicialx() - i][Branca.GetInicialy() + i] == 'P') {
				x = Branca.GetInicialx() - i;
				y = Branca.GetInicialy() + i;
			}
		}
	}//este é o movimento para a diagonal inferor esquerda
	if (variaX > 0 && variaY < 0) {
for (i = 1;i <= NumeroDeCasasEntrePontos;i++) {
			if (tabuleiro[Branca.GetInicialx() + i][Branca.GetInicialy() - i] == 'X' ||
				tabuleiro[Branca.GetInicialx() + i][Branca.GetInicialy() - i] == 'P') {
				x = Branca.GetInicialx() + i;
				y = Branca.GetInicialy() - i;
			}
		}
	}//este é o movimento para a diagonal inferor direita
	if (variaX > 0 && variaY < 0) {
for (i = 1;i <= NumeroDeCasasEntrePontos;i++) {
			if (tabuleiro[Branca.GetInicialx() + i][Branca.GetInicialy() + i] == 'X' ||
				tabuleiro[Branca.GetInicialx() + i][Branca.GetInicialy() + i] == 'P') {
				x = Branca.GetInicialx() + i;
				y = Branca.GetInicialy() + i;
			}
		}
	}

	//------------------------------------------------------------------------------------------
	if (a == 1) {
		tabuleiro[Branca.GetInicialx()][Branca.GetInicialy()] = ' ';
		tabuleiro[Branca.GetFinalx()][Branca.GetFinaly()] = 'O';
	}if (a == 2) {
		int xmed, ymed;

		xmed = (Branca.GetInicialx() + Branca.GetFinalx()) / 2;
		ymed = (Branca.GetInicialy() + Branca.GetFinaly()) / 2;

		tabuleiro[Branca.GetInicialx()][Branca.GetInicialy()] = ' ';
		tabuleiro[xmed][ymed] = ' ';//para verificar qual temos de apagar para a acptura temos de calcular 
		//o ponto medio
		tabuleiro[Branca.GetFinalx()][Branca.GetFinaly()] = 'O';
	}
	if (a == 3) {
		
		tabuleiro[Branca.GetInicialx()][Branca.GetInicialy()] = ' ';
		tabuleiro[x][y] = ' ';
		//para verificar qual temos de apagar para a acptura temos de calcular 
		tabuleiro[Branca.GetFinalx()][Branca.GetFinaly()] = 'B';
	}
}

void Tabuleiro::AlterarTabuleiroPreta(int a)
{
	if (a == 1) {
		tabuleiro[Preta.GetInicialx()][Preta.GetInicialy()] = ' ';
		tabuleiro[Preta.GetFinalx()][Preta.GetFinaly()] = 'X';
	}if (a == 2) {
		int xmed, ymed;

		xmed = (Preta.GetInicialx() + Preta.GetFinalx()) / 2;
		ymed = (Preta.GetInicialy() + Preta.GetFinaly()) / 2;

		tabuleiro[Preta.GetInicialx()][Preta.GetInicialy()] = ' ';
		tabuleiro[xmed][ymed] = ' ';//para verificar qual temos de apagar para a acptura temos de calcular 
		//o ponto medio
		tabuleiro[Preta.GetFinalx()][Preta.GetFinaly()] = 'X';
	}
}

void Tabuleiro::ExperimentaeAlterarTabuleiro()
{
	tabuleiro[1][1] = ' ';
	tabuleiro[1][2] = ' ';
	tabuleiro[1][3] = ' ';
	tabuleiro[1][4] = ' ';
	tabuleiro[1][5] = ' ';
	tabuleiro[1][6] = ' ';
}

void Tabuleiro::TransformarEmDama()
{
	int i, j;
	for (i = 0;i < 8;i++) {
		if (tabuleiro[0][i] == 'O') {
			tabuleiro[0][i] = 'B';
		}
	}
	for (i = 0;i < 8;i++) {
		if (tabuleiro[7][i] == 'X') {
			tabuleiro[7][i] = 'P';
		}
	}
}




Tabuleiro::~Tabuleiro()
{
}


