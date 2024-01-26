#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <fstream>
#include <cstdlib>
#include "letra_existe.hpp"
#include "imprime_cabecalho.hpp"
#include "le_arquivo.hpp"
#include "sorteia_palavra.hpp"
#include "nao_enforcou.hpp"
#include "imprime_erros.hpp"
#include "imprime_palavra.hpp"
#include "chuta.hpp"
#include "adiciona_palavra.hpp"
#include "nao_acertou.hpp"
#include "ehPalavraComposta.hpp"
#include "imprime_tentativas.hpp"
#include "letra_ja_chutada.hpp"
#include "salva_arquivo.hpp"

using namespace std;

int tentativas = 5;
string palavra_secreta; 
map<char, bool> chutou;
vector<char> chutes_errados;
vector<char> chutes_feitos;


int main() {

	le_arquivo();
	sorteia_palavra();

	imprime_cabecalho();

	while (nao_acertou() && nao_enforcou()) {

		imprime_erros();

		imprime_palavra();
		imprime_tentativas();


		chuta();
	}

	cout << "FIM DE JOGO!" << endl;
	cout << "A palavra secreta era: " << palavra_secreta << endl;
	if (nao_acertou()) {
		cout << "Voce perdeu! Tente novamente!" << endl;
	}
	else
	{
		cout << "Parabens! Voce acertou a palavra secreta!" << endl;
		cout << "Voce deseja adicionar uma nova palavra ao jogo? (S/N)" << endl;
		char resposta;
		cin >> resposta;
		resposta = toupper(resposta);
		if (resposta == 'S') {
			adiciona_palavra();
		}
	}
	cin.get();
}