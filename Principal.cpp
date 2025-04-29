#include "Principal.h"
#include <iostream>


Principal::Principal() {

	// Inicializando aluno1 e alocando mem�ria nele
	aluno1 = new Aluno("123456789", "Nicolas");
	objetoMenu = new Menu();
	universidade1 = new Universidade();
}

Principal::~Principal() {
	delete aluno1;
	delete objetoMenu;
	delete universidade1;
}

void Principal::ExecutarPrograma() {

	objetoMenu->MenuInicial();
	objetoMenu->MenuCadastro();

}


void Principal::CadastrarAluno() {
	// Implementar a l�gica de cadastro de aluno
}

void Principal::SalvarAluno() {
	// Implementar a l�gica de salvar aluno
}

void Principal::RecuperarAluno() {
	// Implementar a l�gica de recuperar aluno
}
