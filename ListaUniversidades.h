#ifndef LISTAUNIVERSIDADE_H
#define LISTAUNIVERSIDADE_H

class PtrUniversidade;
class Universidade;

class ListaUniversidades {

private:
	PtrUniversidade* universidadeProx;
	PtrUniversidade* universidadePrim;

public:

	ListaUniversidades();
	~ListaUniversidades();
	void IncluirUniversidade(Universidade* universidadeIncluida);
	void ExibirUniversidades();
};

#endif

