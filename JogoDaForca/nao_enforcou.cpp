#include <vector>

extern std::vector<char> chutes_errados;
extern int tentativas;

bool nao_enforcou() {
	return chutes_errados.size() < tentativas;
}