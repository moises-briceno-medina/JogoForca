#include <iostream>
#include <vector>

extern std::vector<char> chutes_errados;
extern int tentativas;
void imprime_tentativas() {

	std::cout << "Voce tem mais " << tentativas - chutes_errados.size() << " tentativas " << std::endl;
}