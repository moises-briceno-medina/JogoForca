#include <iostream>
// função inline precisa estar no arquivo de cabeçalho (estar na mesma unidade de tradução)
//arquivo de cabeçalho não é compilado,
// ele só é incluido em outros arquivos que vão gerar uma unidade de tradução que ai sim serão compilados
inline void imprime_cabecalho() {
    std::cout << "*********************" << std::endl;
    std::cout << "*** JOGO DA FORCA ***" << std::endl;
    std::cout << "*********************" << std::endl;
    std::cout << std::endl;
}