#include "nao_acertou.hpp"

// & = para acessar a referencia
bool JogoForca:: nao_acertou(std::string& palavra_secreta, const std::map<char, bool>& chutou){
    for(char letra : palavra_secreta){ 
// verifica que a letra não existe no map chutou e se existir garantimos que não é falso "!chutou.at(letra))"
        if(chutou.find(letra) == chutou.end() || !chutou.at(letra)){ 
            return true;
        }
    } 
    return false;
}