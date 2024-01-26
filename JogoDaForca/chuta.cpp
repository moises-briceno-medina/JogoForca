#include <iostream>
#include <vector>
#include <map>
#include "letra_existe.hpp"
#include "letra_ja_chutada.hpp"

extern std::map<char, bool> chutou;
extern std::vector<char> chutes_errados;
extern std::vector< char> chutes_feitos;

void chuta(){
	std::cout << "Seu chute: " << std::endl;
	char chute;
	std::cin >> chute;
	chute = toupper(chute);

	chutou[chute] = true;

	if (letra_ja_chutada(chute))
	{
		std::cout << "Voce ja chutou essa letra antes." << std::endl;
	}
	else
	{
		if (letra_existe(chute)) {
			std::cout << "voce acertou! seu chute esta na palavra" << std::endl;
		}
		else
		{
			std::cout << "voce errou! seu chute nao esta na palavra" << std::endl;
			chutes_errados.push_back(chute);
		}
	}
	chutes_feitos.push_back(chute);
	std::cout << std::endl;
}