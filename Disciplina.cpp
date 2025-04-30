#include "Disciplina.h"
#include "Departamento.h"
#include "Aluno.h"
#include <string.h>
#include <iostream>
using std::cout;
using std::endl;

Disciplina::Disciplina(int numAlunosParam) {
	// Construtor padr�o
	departamentoAssociado = nullptr;
	prxDisciplina = nullptr;
	alunoAtual = nullptr;
	proximoAluno = nullptr;
	numAlunos = numAlunosParam;
	contAlunos = 0;
	nomeDisciplina[0] = '\0';
	
	
}
Disciplina::~Disciplina() {
	// Destrutor padr�o
	departamentoAssociado = nullptr;
	prxDisciplina = nullptr;
	alunoAtual = nullptr;
	proximoAluno = nullptr;
}

void Disciplina::IncluirAluno(Aluno* alunoIncluido) {
	

	if (contAlunos < numAlunos && alunoAtual != NULL) {
		if (alunoAtual == NULL) {
			alunoAtual = alunoIncluido;
			proximoAluno = alunoIncluido;
		}
		else {
			// proximoAluno->prxAluno = alunoIncluido;
			proximoAluno = alunoIncluido;
		}

		contAlunos++;
	}
	else { cout << "Limite de alunos atingido!" << endl; }
	
}

// Fun��o set
void Disciplina::SetNomeDisciplina(const char* nomeDisciplinaParam) {
	strcpy_s(nomeDisciplina, strlen(nomeDisciplinaParam), nomeDisciplinaParam);
}

void Disciplina::SetDptAssociado(Departamento* dptParam) {

	// Fazendo com que o departamento associado seja igual ao dptParam
	this->departamentoAssociado = dptParam;

	// Incluindo a disciplina (esse objeto) no departamento associado
	dptParam->IncluaDisciplina(this);

}

// Fun��o get
char* Disciplina::GetNomeDisciplina() {
	return nomeDisciplina;
}

Departamento* Disciplina::GetDptAssociado() {
	return this->departamentoAssociado;
}

