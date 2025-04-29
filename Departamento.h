#ifndef DEPARTAMENTO_H
#define DEPARTAMENTO_H
class Universidade;
class Disciplina;

class Departamento {
private:

	char nome[50];
	Universidade* universidadeAssociada;
	Disciplina* disciplinaAtual;
	Disciplina* disciplinaProxima;


public:

	// Construtor/Destrutor
	Departamento();
	~Departamento();

	void IncluaDisciplina(Disciplina* proximaDisciplina);
	// Set e Get
	void SetNome(char* nomeParam);
	char* GetNome();
	Universidade* GetUniversidadeAssociada();
	void SetUniversidadeAssociada(Universidade* universidadeParam);
	

};

#endif 