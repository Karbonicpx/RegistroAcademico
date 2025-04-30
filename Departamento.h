#ifndef DEPARTAMENTO_H
#define DEPARTAMENTO_H
class Universidade;
class Disciplina;
class Departamento;

class Departamento {
private:

	char nome[50];
	Universidade* universidadeAssociada;
	Disciplina* disciplinaAtual;
	Disciplina* disciplinaProxima;
	Departamento* proximoDpt;


public:

	// Construtor/Destrutor
	Departamento();
	~Departamento();

	void IncluaDisciplina(Disciplina* proximaDisciplina);
	// Set e Get
	void SetNome(char* nomeParam);
	void SetUniversidadeAssociada(Universidade* universidadeParam);
	char* GetNome();
	Universidade* GetUniversidadeAssociada();
	Departamento* GetProximoDpt();
	void SetProximoDpt(Departamento* proximoDptParam);
	
	

};

#endif 