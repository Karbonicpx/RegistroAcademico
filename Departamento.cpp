#include "Departamento.h"
#include "Disciplina.h"
#include "Universidade.h"	
#include <string.h>

Departamento::Departamento() {
	// Construtor padr�o
	nome[0] = '\0';
	disciplinaAtual = nullptr;
	disciplinaProxima = nullptr;
	universidadeAssociada = nullptr;
	proximoDpt = nullptr;

}
Departamento::~Departamento() {
	// Destrutor padr�o
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
	// Retornando o pr�ximo departamento
	return this->proximoDpt;
}
void Departamento::SetProximoDpt(Departamento* proximoDptParam) {
	// Setando o pr�ximo departamento
	this->proximoDpt = proximoDptParam;
}

void Departamento::IncluaDisciplina(Disciplina* proximaDisciplina) {
	

	// Lista encadeada!
	// Se o ponteiro atual for nulo, ou seja, n�o existe nenhuma disciplina, o prox e o atual ser�o a mesma coisa
	if (disciplinaAtual == NULL) {

		disciplinaAtual = proximaDisciplina;
		disciplinaProxima = proximaDisciplina;
	}
	// Caso j� tenha um ponteiro pre existente...
	// Aponta a disciplina atual para a pr�xima, atrav�s do campo prxDisciplina
	// E faz o atual ser o proximo ponteiro
	else {
		disciplinaAtual->prxDisciplina = proximaDisciplina;
		disciplinaAtual = proximaDisciplina;
	}
}