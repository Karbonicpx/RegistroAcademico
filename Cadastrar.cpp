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
	
	Universidade* universidade = new Universidade();
	char* userInput = new char[50];
	cout << "Digite o nome da universidade: \n" << endl;
	cin >> userInput;
	userInput = universidade->SetNome(userInput);
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
	Aluno* aluno = new Aluno();
	Disciplina* disciplina = new Disciplina();
	char* userInput = new char[50];

	// Setando o userinput como o nome da disciplina, e setando a disciplina para o aluno
	// cout << "Que disciplina este aluno esta matriculado? " << endl;
	// cin >> userInput;
	// disciplina->SetNomeDisciplina(userInput);
	// aluno->SetDisciplina(disciplina);

	// Setando o userinput como o ra
	cout << "Digite o RA do aluno: " << endl;
	cin >> userInput;
	aluno->SetRa(userInput);
	cout << "Digite o nome do aluno: " << endl;

	// Setando o userinput como nome
	cin >> userInput;
	aluno->SetNome(userInput);
	cout << "Cadastro finalizado, pressiona qualquer tecla..." << endl;
	getchar();
}