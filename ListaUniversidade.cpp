#include "ListaUniversidade.h"
#include "Aluno.h"
#include "Universidade.h"


ListaUniversidade::ListaUniversidade()
{
	ptrUni = nullptr;
	ptrAtual = nullptr;
	ptrProx = nullptr;
}

ListaUniversidade::~ListaUniversidade()
{
	ptrUni = nullptr;
	ptrAtual = nullptr;
	ptrProx = nullptr;
}

void ListaUniversidade::SetUniversidade(Universidade* uniParam)
{
	ptrUni = uniParam;
}

Universidade* ListaUniversidade::GetUniversidade()
{
	return ptrUni;
}

const char* ListaUniversidade::GetNomeUni()
{
	if (ptrUni != nullptr)
	{
		return ptrUni->GetNome();
	}
	else
	{
		return nullptr;
	}
}

