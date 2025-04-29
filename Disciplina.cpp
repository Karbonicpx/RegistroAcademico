#include "Disciplina.h"
#include "Departamento.h"
#include "Aluno.h"
#include <string.h>
#include <iostream>
using std::cout;
using std::endl;

Disciplina::Disciplina(int numAlunosParam = 45) {
	// Construtor padrão
	departamentoAssociado = NULL;
	prxDisciplina = NULL;
	numAlunos = numAlunosParam;
}
Disciplina::~Disciplina() {
	// Destrutor padrão
	departamentoAssociado = NULL;
	prxDisciplina = NULL;
}

void Disciplina::IncluirAluno(Aluno* alunoIncluido) {
	

	if (contAlunos < numAlunos && alunoAtual != NULL) {
		if (alunoAtual == NULL) {
			alunoAtual = alunoIncluido;
			proximoAluno = alunoIncluido;
		}
		else {
			proximoAluno->prxAluno = alunoIncluido;
			proximoAluno = alunoIncluido;
		}

		contAlunos++;
	}
	else { cout << "Limite de alunos atingido!" << endl; }
	
}

// Função set
void Disciplina::SetNomeDisciplina(const char* nomeDisciplinaParam) {
	strcpy_s(nomeDisciplina, strlen(nomeDisciplinaParam), nomeDisciplinaParam);
}

void Disciplina::SetDptAssociado(Departamento* dptParam) {

	// Fazendo com que o departamento associado seja igual ao dptParam
	this->departamentoAssociado = dptParam;

	// Incluindo a disciplina (esse objeto) no departamento associado
	dptParam->IncluaDisciplina(this);

}

// Função get
char* Disciplina::GetNomeDisciplina() {
	return nomeDisciplina;
}

Departamento* Disciplina::GetDptAssociado() {
	return this->departamentoAssociado;
}

