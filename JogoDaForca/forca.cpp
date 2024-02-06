#include <iostream>
#include <string>
#include <map>
#include <array>
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

static int numeros_de_chutes_errados = 0;
static int numeros_de_chutes_feitos = 0;
static int tentativas = 5;
static string palavra_secreta;
static map<char, bool> chutou;
static array<char,5> chutes_errados;
static array<char,30> chutes_feitos;


int main() {

	

	palavra_secreta = JogoForca::sorteia_palavra();

	while (JogoForca::nao_acertou(palavra_secreta, chutou) && numeros_de_chutes_errados < tentativas) {
		
		system("cls");

		imprime_cabecalho();
		
		JogoForca::imprime_palavra(palavra_secreta, chutou);
		JogoForca::imprime_erros(chutes_errados);
		
		JogoForca::imprime_tentativas(numeros_de_chutes_errados, tentativas);


		JogoForca::chuta(chutou, chutes_errados, chutes_feitos, palavra_secreta,numeros_de_chutes_errados, numeros_de_chutes_feitos);
	}
	system("cls");
	cout << "************************************" << endl;
	cout << "FIM DE JOGO!" << endl;
	cout << "A palavra secreta era: " << palavra_secreta << endl;
	cout << "************************************" << endl;


	if (JogoForca::nao_acertou(palavra_secreta, chutou)){
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
			JogoForca::adiciona_palavra();
		}
	}
	cin.get();
}