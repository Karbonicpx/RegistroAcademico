#ifndef _MENU_H_
#define _MENU_H_
class Cadastro;
class Exibir;
class Salvar;
class Recuperar;
class Universidade;



class Menu {
	

private:
	char menuInput[1];
	char* userInput;
	Cadastro* cadastro;
	Exibir* exibir;
	Salvar* salvar;
	Recuperar* recuperar;
	
public:
	Menu();
	~Menu();

	// Menus
	void MenuInicial();
	void MenuCadastro();
	void MenuExibir();
	void MenuSalvar();
	void MenuRecuperar();
};
#endif