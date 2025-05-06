#ifndef PTRUNIVERSIDADE_H
#define PTRUNIVERSIDADE_H

class Universidade;


class PtrUniversidade
{
private:
	Universidade* ptrUni;
	PtrUniversidade* ptrProx;
	PtrUniversidade* ptrAtual;

public:
	PtrUniversidade();
	~PtrUniversidade();
	void SetUniversidade(Universidade* uniParam);
	Universidade* GetUniversidade();
	const char* GetNomeUni();
	PtrUniversidade* GetProx();
	void SetProx(PtrUniversidade* ptrProx);
};
#endif

