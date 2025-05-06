#include "PtrUniversidade.h"
#include "Universidade.h"


PtrUniversidade::PtrUniversidade()
{
	ptrUni = nullptr;
	ptrAtual = nullptr;
	ptrProx = nullptr;
}

PtrUniversidade::~PtrUniversidade()
{
	ptrUni = nullptr;
	ptrAtual = nullptr;
	ptrProx = nullptr;
}

void PtrUniversidade::SetUniversidade(Universidade* uniParam)
{
	ptrUni = uniParam;
}

Universidade* PtrUniversidade::GetUniversidade()
{
	return ptrUni;
}

PtrUniversidade* PtrUniversidade::GetProx()
{
	return ptrProx;
}

void PtrUniversidade::SetProx(PtrUniversidade* ptrProx)
{
	this->ptrProx = ptrProx;
}

const char* PtrUniversidade::GetNomeUni()
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

