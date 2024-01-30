#include "imprime_tentativas.hpp"


void JogoForca:: imprime_tentativas(std::vector<char>& chutes_errados, int& tentativas) {

	std::cout << "Voce tem mais " << tentativas - chutes_errados.size() << " tentativas " << std::endl;
}