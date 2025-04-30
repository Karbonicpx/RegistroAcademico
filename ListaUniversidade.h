#ifndef LISTAUNIVERSIDADE_H
#define LISTAUNIVERSIDADE_H

class Universidade;


class ListaUniversidade
{
private:
	Universidade* ptrUni;

public:
	ListaUniversidade();
	~ListaUniversidade();
	ListaUniversidade* ptrProx;
	ListaUniversidade* ptrAtual;
	void SetUniversidade(Universidade* uniParam);
	Universidade* GetUniversidade();
	const char* GetNomeUni();
}
#endif

