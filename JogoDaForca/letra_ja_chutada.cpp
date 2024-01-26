#include<vector>

extern std::vector<char> chutes_feitos;

bool letra_ja_chutada(char letra) {
	for (char letra_chutes_feitos : chutes_feitos) {
		if (letra == letra_chutes_feitos) {
			return true;
		}
	}
	return false;
}