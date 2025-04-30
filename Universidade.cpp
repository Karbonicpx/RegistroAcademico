#include "Universidade.h"
#include "ListaUniversidade.h"
#include "Departamento.h"
#include <string.h>

Universidade::Universidade() {
	nome[0] = '\0';
}

Universidade::~Universidade() {
	// Destrutor
	nome[0] = NULL;
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