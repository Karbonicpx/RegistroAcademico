#ifndef UNIVERSIDADE_H
#define UNIVERSIDADE_H

class Universidade {

private:
	char nome[50];

public:

	Universidade();
	~Universidade();
	const char* GetNome();
	char* SetNome(char* nomeParam);

};

#endif
