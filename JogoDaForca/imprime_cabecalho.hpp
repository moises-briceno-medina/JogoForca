#include <iostream>
// fun��o inline precisa estar no arquivo de cabe�alho (estar na mesma unidade de tradu��o)
//arquivo de cabe�alho n�o � compilado,
// ele s� � incluido em outros arquivos que v�o gerar uma unidade de tradu��o que ai sim ser�o compilados
inline void imprime_cabecalho() {
    std::cout << "*********************" << std::endl;
    std::cout << "*** JOGO DA FORCA ***" << std::endl;
    std::cout << "*********************" << std::endl;
    std::cout << std::endl;
}