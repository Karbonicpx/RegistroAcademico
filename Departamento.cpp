#include "Departamento.h"
#include "Disciplina.h"
#include "Universidade.h"	
#include <string.h>

Departamento::Departamento() {
	// Construtor padrão
	nome[0] = '\0';
	disciplinaAtual = nullptr;
	disciplinaProxima = nullptr;
	universidadeAssociada = nullptr;
	proximoDpt = nullptr;

}
Departamento::~Departamento() {
	// Destrutor padrão
	nome[0] = NULL;
	disciplinaAtual = nullptr;
	disciplinaProxima = nullptr;
	universidadeAssociada = nullptr;
	proximoDpt = nullptr;
}
void Departamento::SetNome(char* nomeParam) {
	// Setando o nome do departamento
	strcpy_s(this->nome, sizeof(this->nome), nome);
}
char* Departamento::GetNome() {
	// Retornando o nome do departamento
	return this->nome;
}
Universidade* Departamento::GetUniversidadeAssociada() {
	// Retornando a universidade associada ao departamento
	return this->universidadeAssociada;
}
void Departamento::SetUniversidadeAssociada(Universidade* universidadeParam) {
	// Setando a universidade associada ao departamento
	this->universidadeAssociada = universidadeParam;
	universidadeParam->IncluirDepartamento(this);



}

Departamento* Departamento::GetProximoDpt() {
	// Retornando o próximo departamento
	return this->proximoDpt;
}
void Departamento::SetProximoDpt(Departamento* proximoDptParam) {
	// Setando o próximo departamento
	this->proximoDpt = proximoDptParam;
}

void Departamento::IncluaDisciplina(Disciplina* proximaDisciplina) {
	

	// Lista encadeada!
	// Se o ponteiro atual for nulo, ou seja, não existe nenhuma disciplina, o prox e o atual serão a mesma coisa
	if (disciplinaAtual == NULL) {

		disciplinaAtual = proximaDisciplina;
		disciplinaProxima = proximaDisciplina;
	}
	// Caso já tenha um ponteiro pre existente...
	// Aponta a disciplina atual para a próxima, através do campo prxDisciplina
	// E faz o atual ser o proximo ponteiro
	else {
		disciplinaAtual->prxDisciplina = proximaDisciplina;
		disciplinaAtual = proximaDisciplina;
	}
}