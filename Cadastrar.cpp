#include "Cadastro.h"
#include "Aluno.h"
#include "Universidade.h"
#include <iostream>
#include <stdio.h>
using std::cout;
using std::endl;
using std::cin;


Cadastro::Cadastro() {
	// Construtor padrão

}
Cadastro::~Cadastro() {
	// Destrutor padrão
}

void Cadastro::CadastroUniversidade() {
	
	char* userInput = new char[50];
	cout << "Digite o nome da universidade: \n" << endl;
	cin >> userInput;
	cout << "Universidade cadastrada... Pressione qualquer tecla para sair" << endl;

	// Ignora o '\n' que ficou no buffer
	cin.ignore();
	// Aguarda o ENTER do usuário
	cin.get();

}

void Cadastro::CadastroDepartamento() {
	// Implementar a lógica de cadastro de universidade
}

void Cadastro::CadastroDisciplina() {
	// Implementar a lógica de cadastro de departamento
}

void Cadastro::CadastroAluno() {
	
}