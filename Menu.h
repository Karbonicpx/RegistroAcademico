#ifndef _MENU_H_
#define _MENU_H_


class Menu {
	

private:
	char menuInput[1];
	char* userInput;

public:
	Menu();
	~Menu();

	// Menus
	void MenuInicial();
	void MenuCadastro();
	void MenuExibir();
	void MenuSalvar();
	void MenuRecuperar();

	// Get
	char GetMenuInput() {
		return menuInput[0];
	}
};
#endif