#ifndef SISTEMAACADEMICO_H
#define SISTEMAACADEMICO_H
#include "Lista.h"

class Universidade;
class Departamento;
class Disciplina;
class Aluno;

class SistemaAcademico {

private:

	Lista<Universidade>* listaUniversidade;
	Lista<Departamento>* listaDepartamento;
	Lista<Disciplina>* listaDisciplina;
	Lista<Aluno>* listaAluno;

public:
	SistemaAcademico();
	~SistemaAcademico();
	
};

#endif