#include "Aluno.h"
#include <string.h>
#include <stdio.h>
#include <iostream>
using std::cout;
using std::endl;

// Construtor com parâmetro --> Inicializando o aluno com esses valores
Aluno::Aluno(const char* ra, const char* nome) {
   
	// Pega o valor dentro da classe, coloca o tamanho da string, e depois o parâmetro vai setar o valor dele na da classe
	strcpy_s(this->ra, sizeof(this->ra), ra);
	strcpy_s(this->nome, sizeof(this->nome), nome);
	prxAluno = NULL;
}

// Construtor sem parâmetros --> Valor padrão é vazio
Aluno::Aluno() {

	strcpy_s(this->ra, sizeof(this->ra), "");
	strcpy_s(this->nome, sizeof(this->nome), "");
	prxAluno = NULL;
}

// Destrutor
Aluno::~Aluno() {
	prxAluno = NULL;
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
