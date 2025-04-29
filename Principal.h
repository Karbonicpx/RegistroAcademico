#ifndef PRINCIPAL_H
#define PRINCIPAL_H
class Menu;
class Aluno;
class Universidade;

class Principal {

private:

	Menu* objetoMenu;
	Aluno* aluno1;
	Universidade* universidade1;
public:
	Principal();
	~Principal();
	void CadastrarAluno();
	void SalvarAluno();
	void RecuperarAluno();
	void ExecutarPrograma();

};

#endif
