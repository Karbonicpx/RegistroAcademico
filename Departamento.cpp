#include "Departamento.h"
#include "Disciplina.h"
#include <string.h>

Departamento::Departamento() {
	// Construtor padrão
	disciplinaAtual = NULL;
	disciplinaProxima = NULL;

}
Departamento::~Departamento() {
	// Destrutor padrão
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