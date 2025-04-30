#ifndef SISTEMAACADEMICO_H
#define SISTEMAACADEMICO_H
class Universidade;
class Menu;

class SistemaAcademico {

private:

	Menu* objMenu;
	Universidade* universidadeProx;
	Universidade* universidadeAtual;
public:
	SistemaAcademico();
	~SistemaAcademico();
	void IncluirUniversidade(Universidade* universidadeIncluida);
	Menu* GetMenu();
	
	
};

#endif