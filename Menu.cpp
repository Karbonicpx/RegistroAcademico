#include "Menu.h"
#include <iostream>
using std::cout;
using std::endl;
using std::cin;

Menu::Menu() {
	// Construtor padrão
	menuInput[0] = NULL;
	userInput = NULL;
	objetoCadastro = new Cadastro();
}

Menu::~Menu() {
	// Destrutor padrão
}	


void Menu::MenuInicial() {

	system("CLS");
	cout << "=== MENU INICIAL ===" << endl;
	cout << "Escolha uma opcao: \n" << endl;
	cout << "1. Cadastrar" << endl;
	cout << "2. Exibir Dados" << endl;
	cout << "3. Salvar Dados" << endl;
	cout << "4. Recuperar Dados" << endl;
	cout << "5. Sair do programa" << endl;
	cin >> menuInput[0];
	switch (menuInput[0]) {
	case '1':
		MenuCadastro();
		break;
	case '2':
		MenuExibir();
		break;
	case '3':
		MenuSalvar();
		break;
	case '4':
		MenuRecuperar();
		break;
	case '5':
		exit(0);
	default:
		system("CLS");
		MenuInicial();
		break;
	}
}

void Menu::MenuCadastro() {
	system("CLS");
	cout << "=== CADASTRO ===" << endl;
	cout << "Escolha uma opcao: \n" << endl;
	cout << "1. Cadastrar Universidade" << endl;
	cout << "2. Cadastrar Departamento" << endl;
	cout << "3. Cadastrar Disciplina" << endl;
	cout << "4. Cadastrar Aluno" << endl;
	cout << "5. Voltar ao menu inicial" << endl;
	cin >> menuInput[0];
	switch (menuInput[0]) {
	case '1':
		objetoCadastro->CadastroUniversidade();
		break;
	case '2':
		// Código para cadastrar universidade
		break;
	case '3':
		// Código para cadastrar departamento
		break;
	case '4':
		// Código para cadastrar disciplina
		objetoCadastro->CadastroAluno();
		MenuCadastro();
		break;

	case '5':
		MenuInicial();
		break;
	default:
		system("CLS");
		MenuCadastro();
		break;
	}
}

void Menu::MenuExibir() {

	system("CLS");
	cout << "=== EXIBIR DADOS ===" << endl;
	cout << "Escolha uma opcao: \n" << endl;
	cout << "1. Exibir Aluno(s)" << endl;
	cout << "2. Exibir Universidade(s)" << endl;
	cout << "3. Exibir Departamento(s)" << endl;
	cout << "4. Exibir Disciplina(s)" << endl;
	cout << "5. Exibir Tudo" << endl;
	cout << "6. Voltar ao menu inicial" << endl;
	cin >> menuInput[0];
	switch (menuInput[0]) {
	case '1':
		// Código para exibir aluno
		break;
	case '2':
		// Código para exibir universidade
		break;
	case '3':
		// Código para exibir departamento
		break;
	case '4':
		// Código para exibir disciplina
		break;
	case '5':
		// Código para exibir tudo
		break;
	case '6':
		MenuInicial();
		break;
	default:
		system("CLS");
		MenuExibir();
		break;
	}
}



void Menu::MenuSalvar() {

	system("CLS");
	cout << "=== SALVAR DADOS ===" << endl;
	cout << "Escolha uma opcao: \n" << endl;
	cout << "1. Salvar Aluno" << endl;
	cout << "2. Salvar Universidade" << endl;
	cout << "3. Salvar Departamento" << endl;
	cout << "4. Salvar Disciplina" << endl;
	cout << "5. Voltar ao menu inicial" << endl;
	cin >> menuInput[0];
	switch (menuInput[0]) {
	case '1':
		// Código para salvar aluno
		break;
	case '2':
		// Código para salvar universidade
		break;
	case '3':
		// Código para salvar departamento
		break;
	case '4':
		// Código para salvar disciplina
		break;
	case '5':
		MenuInicial();
		break;
	default:
		system("CLS");
		MenuSalvar();
		break;
	}

}

void Menu::MenuRecuperar() {

	system("CLS");
	cout << "=== RECUPERAR DADOS ===" << endl;
	cout << "Escolha uma opcao: \n" << endl;
	cout << "1. Recuperar Aluno(s)" << endl;
	cout << "2. Recuperar Universidade(s)" << endl;
	cout << "3. Recuperar Departamento(s)" << endl;
	cout << "4. Recuperar Disciplina(s)" << endl;
	cout << "5. Recuperar Tudo" << endl;
	cout << "6. Voltar ao menu inicial" << endl;
	cin >> menuInput[0];
	switch (menuInput[0]) {
	case '1':
		// Código para recuperar aluno
		break;
	case '2':
		// Código para recuperar universidade
		break;
	case '3':
		// Código para recuperar departamento
		break;
	case '4':
		// Código para recuperar disciplina
		break;

	case '5':
		// Código para recuperar disciplina
		break;
	case '6':
		MenuInicial();
		break;
	default:
		system("CLS");
		MenuRecuperar();
		break;
	}
}