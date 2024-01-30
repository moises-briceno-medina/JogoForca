#include <vector>
#include "sorteia_palavra.hpp"
#include "le_arquivo.hpp"
#include <ctime>


std:: string JogoForca:: sorteia_palavra(){
    std::vector<std::string> palavras = JogoForca::le_arquivo();

    srand(time(NULL));
    int indice_sorteado = rand() % palavras.size();

    return palavras[indice_sorteado];
}