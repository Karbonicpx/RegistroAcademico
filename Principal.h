#ifndef PRINCIPAL_H
#define PRINCIPAL_H
#include "Aluno.h"
#include "Menu.h"

class Principal {

private:

	Menu* objetoMenu;
	Aluno* aluno1;
	Aluno* aluno2;
	Aluno* aluno3;
	Universidade* universidade1;
	Universidade* universidade2;
	Universidade* universidade3;
public:
	Principal();
	~Principal();
	void CadastrarAluno();
	void SalvarAluno();
	void RecuperarAluno();
	void ExecutarPrograma();

};

#endif
