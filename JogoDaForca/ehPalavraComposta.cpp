#include <string>


bool ehPalavraComposta(std::string palavra_composta) {
	for (char letra : palavra_composta) {
		if (letra == ' ' || letra == '-') {
			return true;
		}
	}
	return false;
}