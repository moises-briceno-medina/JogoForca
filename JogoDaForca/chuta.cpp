#include <iostream>
#include "letra_existe.hpp"
#include "letra_ja_chutada.hpp"
#include "chuta.hpp"


void chuta(std::map<char, bool>* chutou, std::vector<char>* chutes_errados , std::vector< char>* chutes_feitos, std::string* palavra_secreta){
	std::cout << "Seu chute: " << std::endl;
	char chute;
	std::cin >> chute;
	chute = toupper(chute);

	(*chutou)[chute] = true;

	if ((*letra_ja_chutada)(chute, chutes_feitos))
	{
		std::cout << "Voce ja chutou essa letra antes." << std::endl;
	}
	else
	{
		if ((*letra_existe)(chute,palavra_secreta)) {
			std::cout << "voce acertou! seu chute esta na palavra" << std::endl;
		}
		else
		{
			std::cout << "voce errou! seu chute nao esta na palavra" << std::endl;
			chutes_errados->push_back(chute);
		}
	}
	chutes_feitos->push_back(chute);
	std::cout << std::endl;
}