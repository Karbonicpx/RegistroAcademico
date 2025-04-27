#include "Principal.h"
#include <iostream>
using std::cout;
using std::endl;


Principal::Principal() {

	// Inicializando aluno1 e alocando memória nele
	aluno1 = new Aluno("123456789", "Nicolas");
	aluno2 = new Aluno("987654321", "Einstein");
	objetoMenu = new Menu();
	universidade1 = new Universidade("Cambridge");
	aluno2->SetUniversidadeAtual(universidade1);
}

Principal::~Principal() {
	delete aluno1;
	delete aluno2;
	delete objetoMenu;
}

void Principal::ExecutarPrograma() {

	objetoMenu->MenuInicial();
	objetoMenu->MenuCadastro();

}


void Principal::CadastrarAluno() {
	// Implementar a lógica de cadastro de aluno
}

void Principal::SalvarAluno() {
	// Implementar a lógica de salvar aluno
}

void Principal::RecuperarAluno() {
	// Implementar a lógica de recuperar aluno
}
