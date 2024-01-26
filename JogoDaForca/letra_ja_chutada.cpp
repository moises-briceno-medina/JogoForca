#include"letra_ja_chutada.hpp"

bool letra_ja_chutada(char letra, std::vector< char>* chutes_feitos) {
	for (char letra_chutes_feitos : (*chutes_feitos)) {
		if (letra == letra_chutes_feitos) {
			return true;
		}
	}
	return false;
}