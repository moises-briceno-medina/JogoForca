#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cctype>
#include "le_arquivo.hpp"
#include "salva_arquivo.hpp"
#include "ehPalavraComposta.hpp"


void adiciona_palavra() {
	bool palavra_adicionada = false;
	std::cout << "Nao adicione palavras compostas ou com espaco!!!" << std::endl;
	std::cout << "Digite a nova palavra: " << std::endl;
	do
	{
		std::string nova_palavra;
		std::cin >> nova_palavra;

		if (ehPalavraComposta(nova_palavra))

		{
			std::cout << "A palavra nao pode ser composta ou ter espaco" << std::endl;
			std::cout << "Digite a nova palavra: " << std::endl;
		}
		else
		{
			// Convertendo toda a string para maiúsculas
			std::transform(nova_palavra.begin(), nova_palavra.end(), nova_palavra.begin(), toupper);

			std::vector<std::string> lista_palavras = le_arquivo();
			lista_palavras.push_back(nova_palavra);

			salva_arquivo(lista_palavras);
			std::cout << "PALAVRA ADICIONADA COM SUCESSO" << std::endl;

			palavra_adicionada = true;
		}

	} while (palavra_adicionada == false);
}
