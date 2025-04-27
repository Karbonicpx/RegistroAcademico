#ifndef UNIVERSIDADE_H
#define UNIVERSIDADE_H

class Universidade {

private:
	char nome[50];

public:

	Universidade(const char* nomeParam);
	~Universidade();
	const char* GetNome();

};

#endif
