#include <iostream>
#include <fstream>
#include "salva_arquivo.hpp"
#include <cstdlib>


void JogoForca:: salva_arquivo(std::vector<std::string> nova_lista){
    std::ofstream arquivo;
    arquivo.open("palavrasJogoForca.txt");
    if(arquivo.is_open()){
        arquivo << nova_lista.size() << std::endl;

        for(std::string palavra : nova_lista){
            arquivo << palavra << std::endl;
        }
        arquivo.close();
    }
    else{
        std::cout << "Não foi possível acessar o banco de palavras." << std::endl;
        exit(0);
    }
}