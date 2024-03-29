#include <iostream>
#include "imprime_palavra.hpp"


void JogoForca:: imprime_palavra(std::string palavra_secreta, std::map<char, bool>& chutou) {
    std::cout << "Palavra Secreta: ";
    for (char letra : palavra_secreta) {
        if (chutou[letra]) {
            std::cout << letra << " ";
        }
        else {
            std::cout << "_ ";
        }
    }
    std::cout << std::endl;
    std::cout << std::endl;
}