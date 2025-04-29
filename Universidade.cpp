#include "Universidade.h"
#include <string.h>

Universidade::Universidade() {
	// Construtor
}

Universidade::~Universidade() {
	// Destrutor
}

const char* Universidade::GetNome() {
	// Retorna o nome da universidade
	return nome;
}

char* Universidade::SetNome(char* nomeParam) {
	// Copia o nome da universidade
	strcpy_s(nome, sizeof(nome), nomeParam);
	return nome;
}
