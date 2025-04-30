#include "Universidade.h"
#include "Departamento.h"
#include <string.h>

Universidade::Universidade() {
	dptAtual = nullptr;
	dptProximo = nullptr;
	proxUniversidade = nullptr;
	nome[0] = '\0';
}

Universidade::~Universidade() {
	// Destrutor
	dptAtual = nullptr;
	dptProximo = nullptr;
	proxUniversidade = nullptr;
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

void Universidade::IncluirDepartamento(Departamento* dptIncluido) {
	// Inclui um departamento na universidade
	if (dptAtual == NULL) {
		dptAtual = dptIncluido;
		dptProximo = dptIncluido;
	}
	else {
		dptProximo->SetProximoDpt(dptIncluido);
		dptAtual = dptProximo->GetProximoDpt();
	}
}

Universidade* Universidade::GetProximaUniversidade() {
	// Retorna a proxima universidade
	return proxUniversidade;
}

void Universidade::SetProximaUniversidade(Universidade* universidadeIncluida) {
	// Inclui uma nova universidade
	proxUniversidade = universidadeIncluida;
}
