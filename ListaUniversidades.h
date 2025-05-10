#ifndef LISTAUNIVERSIDADE_H
#define LISTAUNIVERSIDADE_H

#include "Ponteiro.h"
class Universidade;

class ListaUniversidades {

private:
	Ponteiro<Universidade>* universidadeProx;
	Ponteiro<Universidade>* universidadePrim;

public:

	ListaUniversidades();
	~ListaUniversidades();
	void IncluirUniversidade(Universidade* universidadeIncluida);
	void ExibirUniversidades();
	void GravarUniversidades();
	void RecuperarUniversidades();
};

#endif

