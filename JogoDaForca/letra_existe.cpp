#include"letra_existe.hpp"

bool JogoForca:: letra_existe(char chute, std::string& palavra_secreta)
{
    for(char letra : palavra_secreta){
        if(chute == letra){
            return true;
        }
    }
    return false;
}