#ifndef _MENU_H_
#define _MENU_H_
class SistemaAcademico;


class Menu {
	

private:
	char menuInput[1];
	char* userInput;
	SistemaAcademico* sistemaAcademico;
	
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