#include "Jogo.h"



Jogo::Jogo()
{
}

void Jogo::menu()
{
	system("cls");
	int opcao;
	printf("\n\t__________________________________________________________\n");
	printf("\t__________________________________________________________\n");
	printf("\t__________________________________________________________\n");
	printf("\t__________________                    ____________________\n");
	printf("\t__________________                    ____________________\n");
	printf("\t__________________   JOGO  DA  DAMA   ____________________\n");
	printf("\t__________________                    ____________________\n");
	printf("\t__________________________________________________________\n");
	printf("\t__________________________________________________________\n");
	printf("\t__________________________________________________________\n\t\t\t\t\tCriado Por :Pedro Monteiro\n\n");

	cout << "Escolha uma das opcoes abaixo:" << endl << "1-Jogar" << endl << "2-Regras do jogo" << endl << "3-sair" << endl;
	cin >> opcao;

	while (opcao != 1 && opcao != 2 && opcao != 3) {
		cout << "Insira um numero valido" << endl;
		cin >> opcao;
	}if (opcao == 1) {
		//limpa consola
		system("cls");
		//Inicializar o jogo

	}if (opcao == 2) {
		//limpa consola
		system("cls");
		//exibir as regras
		cout << "REGRAS:" << endl;
		cout << "O jogo de damas e praticado em um tabuleiro de 64 casas, claras e escuras. " << endl;
		cout << "A grande diagonal (escura), deve ficar sempre a esquerda de cada jogador." << endl;
		cout << "O objetivo do jogo e imobilizar ou capturar todas as pe�as do advers�rio." << endl;
		cout << "O jogo de damas � praticado entre dois parceiros, com 12 pedras brancas de um lado e " << endl;
		cout << "com 12 pedras pretas de outro lado." << endl;
		cout << "O lance inicial cabe sempre a quem estiver com as pe�as brancas.Tamb�m joga - se" << endl;
		cout << "dams em um tabuleiro de 100 casas, com 20 pedras para cada lado - Damas Internacional." << endl;
		cout << "A pedra anda s� para frente, uma casa de cada vez.Quando a pedra atinge a oitava linha " << endl;
		cout << "do tabuleiro ela � promovida � dama." << endl;
		cout << "A dama � uma pe�a de movimentos mais amplos.Ela anda para frente e para tr�s, quantas casas" << endl;
		cout << "quiser.A dama n�o pode saltar uma pe�a da mesma cor." << endl;
		cout << "A captura � obrigat�ria." << endl;
		cout << "N�o existe sopro." << endl;
		cout << "Duas ou mais pe�as juntas, na mesma diagonal, n�o podem ser capturadas." << endl;
		cout << "A pedra captura a dama e a dama captura a pedra.Pedra e dama t�m o mesmo valor para" << endl;
		cout << "capturarem ou serem capturadas." << endl;
		cout << "A pedra e a dama podem capturar tanto para frente como para tr�s, uma ou mais pe�as" << endl;
		cout << "Se no mesmo lance se apresentar mais de um modo de capturar, � obrigat�rio executar" << endl;
		cout << "o lance que capture o maior n�mero de pe�as(Lei da Maioria)." << endl;
		cout << "A pedra que durante o lance de captura de v�rias pe�as, apenas passe por qualquer casa de " << endl;
		cout << "coroa��o, sem a� parar, n�o ser� promovida � dama." << endl;
		cout << "Na execu��o do lance do lance de captura, � permitido passar mais de uma vez pela mesma casa vazia," << endl;
		cout << "n�o � permitido capturar duas vezes a mesma pe�a." << endl;
		cout << "Na execu��o do lance de captura, n�o � permitido capturar a mesma pe�a mais de uma vez e as pe�as" << endl;
		cout << "capturadas n�o podem ser retiradas do tabuleiro antes de completar o lance de captura." << endl;
		cout << "Empate:" << endl;
		cout << "Ap�s 20 lances sucessivos de damas, sem captura ou deslocamento de pedra, a partida � declarada empatada." << endl;
		cout << "Finais de :" << endl;
		cout << " 2 damas contra 2 damas;" << endl;
		cout << " 2 damas contra uma;" << endl;
		cout << "2 damas contra uma dama e uma pedra;" << endl;
		cout << "uma dama contra uma dama e uma dama contra uma dama e uma pedra, s�o declarados empatados ap�s 5 lances." << endl;
		system("pause");
		menu();

	}if (opcao == 3) {
		//limpa consola
		system("cls");
		//sair do jogo
		exit(1);
	}
}

void Jogo::DefinirTabuleiroInicia()
{
	jogar.InserirTabuleiroInicial();
}

void Jogo::InserirDadosEDarPecasJogadores()
{
	jogar.DefinirJogadorTabuleiro();
	//aqui cria o valor aleatorio
	jogar.Aleatorio();
	//vai buscar o valor aleatorio
	jogar.GetAleatorio();
	//diz as pe�as aos jogadores consoante o valor que der no aleatorio
	jogar.DizerPecaJogador(jogar.GetAleatorio());
}

int Jogo::VerificarSeAcabouJogo() const
{
	if (jogar.GetNumeroBrancas() == 0) {
		return 0;
	}if (jogar.GetNumeroPretas() == 0) {
		return 0;
	}
	else { return 1; }
	
}

void Jogo::ImprimirTabuleiroUm()
{
	jogar.ImprimirTabuleiro(1);
	system("pause");
}

void Jogo::JogarBrancas()
{
	//n�o esquecer de terminar este
	// no inicio tera de ter um ciclo while
	system("cls");
	jogar.ImprimirTabuleiro(jogar.GetAleatorio());
	jogar.InserirPosicoesMovimentosPecaBrancas(jogar.GetAleatorio());
	//verificar se o movimento � possivel

	//se for possivel fazer o movimento

	//se n�o for possivel come�ar tudo de novo
}

void Jogo::JogarPretas()
{
	system("cls");
	jogar.ImprimirTabuleiro(jogar.GetAleatorio());
	jogar.InserirPosicoesMovimentosPecaPretas(jogar.GetAleatorio());
}

void Jogo::ContarBrancasePretas()
{
	jogar.SetNumeroBrancas();
	jogar.SetNumeroPretas();
}

void Jogo::VerificarFuncaoContar()
{
	cout << "Brancas-" << jogar.GetNumeroBrancas()<<endl;
	cout << "pretas-" << jogar.GetNumeroPretas() << endl;
}

int Jogo::VerificarMovimentoBrancaJogo() const
{
	return jogar.VerificarMovimentoBranca();
}

int Jogo::VerificarMovimentoPretaJogo() const
{
	return jogar.VerificarMovimentoPreta();
}

void Jogo::ExecutarTipoMovimentoBranca()
{
	jogar.AlterarTabuleiroBranca(jogar.VerificarMovimentoBranca());
}

void Jogo::ExecutarTipoMovimentoPreta()
{
	jogar.AlterarTabuleiroPreta(jogar.VerificarMovimentoPreta());
}

void Jogo::_ExperimentarAlterarTabuleiro()
{
	jogar.ExperimentaeAlterarTabuleiro();
}

void Jogo::TransformarDamas()
{
	jogar.TransformarEmDama();
}




Tabuleiro Jogo::Getjogar()
{
	return jogar;

}


Jogo::~Jogo()
{
}
