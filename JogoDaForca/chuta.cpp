#include <iostream>
#include "letra_existe.hpp"
#include "letra_ja_chutada.hpp"
#include "chuta.hpp"


void JogoForca:: chuta(std::map<char, bool>& chutou, std::array<char,5>& chutes_errados , std::array<char, 30>& chutes_feitos, std::string& palavra_secreta, int& numeros_de_chutes_errados, int& numeros_de_chutes_feitos){
	std::cout << "Seu chute: " << std::endl;
	char chute;
	std::cin >> chute;
	chute = toupper(chute);

	chutou[chute] = true;
	
	if (JogoForca::letra_ja_chutada(chute, chutes_feitos))
	{
		std::cout << "Voce ja chutou essa letra antes." << std::endl;
	}
	else
	{
		if (JogoForca::letra_existe(chute,palavra_secreta)) {
			std::cout << "voce acertou! seu chute esta na palavra" << std::endl;
		}
		else
		{
			std::cout << "voce errou! seu chute nao esta na palavra" << std::endl;
			numeros_de_chutes_errados += 1;
			chutes_errados[numeros_de_chutes_errados - 1] = chute;
		}
	}
	numeros_de_chutes_feitos += 1;
	chutes_feitos[numeros_de_chutes_feitos - 1] = chute;
	std::cout << std::endl;
}