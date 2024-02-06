#include "imprime_tentativas.hpp"


void JogoForca:: imprime_tentativas(int& numeros_de_chutes_errados, int& tentativas) {

	std::cout << "Voce tem mais " << tentativas - numeros_de_chutes_errados << " tentativas " << std::endl;
	std::cout << std::endl;
}