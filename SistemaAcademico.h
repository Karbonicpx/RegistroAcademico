#ifndef SISTEMAACADEMICO_H
#define SISTEMAACADEMICO_H
class Universidade;
class ListaUniversidade;
class Menu;

class SistemaAcademico {

private:

	Menu* objMenu;
	ListaUniversidade* universidadeProx;
	ListaUniversidade* universidadePrim;
public:
	SistemaAcademico();
	~SistemaAcademico();
	void IncluirUniversidade(Universidade* universidadeIncluida);
	Menu* GetMenu();
	
	
	
};

#endif