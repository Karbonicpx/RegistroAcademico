#ifndef SISTEMAACADEMICO_H
#define SISTEMAACADEMICO_H
class Cadastro;
class Exibir;
class Salvar;
class Recuperar;

class SistemaAcademico {

private:
	Cadastro* objetoCadastro;
	Exibir* objetoExibir;
	Salvar* objetoSalvar;
	Recuperar* objetoRecuperar;
public:
	SistemaAcademico();
	~SistemaAcademico();
	
};

#endif