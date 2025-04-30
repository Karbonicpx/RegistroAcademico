#include "Aluno.h"
#include <string.h>
#include <stdio.h>

Aluno::Aluno() {

	ra[0] = '\0';
	nome[0] = '\0';
	prxAluno = nullptr;
	disciplina = nullptr;
}

// Destrutor
Aluno::~Aluno() {
	ra[0] = NULL;
	nome[0] = NULL;
	prxAluno = nullptr;
}



// Funções get
char* Aluno::GetRa() {
    return ra;
}

char* Aluno::GetNome() {
    return nome;
}

// Funções set
void Aluno::SetRa(const char* raParam) {
	strcpy_s(this->ra, sizeof(this->ra), raParam);
}

void Aluno::SetNome(const char* nomeParam) {
	strcpy_s(this->nome, sizeof(this->nome), nomeParam);
}

void Aluno::SetDisciplina(Disciplina* disciplinaParam) {
	this->disciplina = disciplinaParam;
}
