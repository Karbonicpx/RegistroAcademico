#include "Universidade.h"
#include <string.h>

Universidade::Universidade(const char* nomeParam) {
	strcpy_s(this->nome, sizeof(this->nome), nomeParam);
}

Universidade::~Universidade() {
	// Destrutor
}

const char* Universidade::GetNome() {
	// Retorna o nome da universidade
	return nome;
}