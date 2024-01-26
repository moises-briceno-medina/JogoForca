#include <iostream>
#include <string>
#include <map>
#include <vector>
#include "letra_existe.hpp"
#include "imprime_cabecalho.hpp"
#include "le_arquivo.hpp"
#include "sorteia_palavra.hpp"
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

	imprime_cabecalho();

	palavra_secreta = sorteia_palavra();

	while (nao_acertou(palavra_secreta, chutou) && chutes_errados.size() < tentativas) {

		imprime_erros(chutes_errados);

		imprime_palavra(palavra_secreta, chutou);
		imprime_tentativas();


		chuta(&chutou, &chutes_errados, &chutes_feitos, &palavra_secreta);
	}

	cout << "FIM DE JOGO!" << endl;
	cout << "A palavra secreta era: " << palavra_secreta << endl;

	if (nao_acertou(palavra_secreta, chutou)){
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