#ifndef UNIVERSIDADE_H
#define UNIVERSIDADE_H

class Departamento; 

class Universidade {

private:
	char nome[50];
	Departamento* dptAtual;
	Departamento* dptProximo;
	Universidade* proxUniversidade;
public:

	Universidade();
	~Universidade();
	const char* GetNome();
	char* SetNome(char* nomeParam);
	Universidade* GetProximaUniversidade();
	void SetProximaUniversidade(Universidade* universidadeIncluida);
	void IncluirDepartamento(Departamento* dptIncluido);
	


};

#endif
