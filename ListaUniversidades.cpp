#include "ListaUniversidades.h"
#include "PtrUniversidade.h"
#include "Universidade.h"
#include <iostream>
using std::cout;
using std::endl;

ListaUniversidades::ListaUniversidades()
{
	// Inicializa os ponteiros
	universidadeProx = nullptr;
	universidadePrim = nullptr;
}

ListaUniversidades::~ListaUniversidades()
{
	// Destrói a lista de universidades
	PtrUniversidade* uniAux = universidadeProx;
	while (uniAux != nullptr) {
		PtrUniversidade* uniTemp = uniAux;
		uniAux = uniAux->GetProx();
		delete uniTemp;
	}
	universidadeProx = nullptr;
	universidadePrim = nullptr;
}
void ListaUniversidades::IncluirUniversidade(Universidade* universidadeIncluida)
{
	// Inclui uma universidade no sistema acadêmico
	PtrUniversidade* uniAux = new PtrUniversidade();
	uniAux->SetUniversidade(universidadeIncluida);

	if (universidadeProx == nullptr) {
		universidadeProx = uniAux;
		universidadePrim = uniAux;
	}
	else {
		universidadePrim->SetProx(uniAux);
		universidadePrim = uniAux;
	}
}
void ListaUniversidades::ExibirUniversidades()
{
	
	// Exibe as universidades cadastradas
	PtrUniversidade* uniAux = universidadeProx;
	if (uniAux == nullptr) {
		cout << "Nenhuma universidade cadastrada." << endl;
		return;
	}
	while (uniAux != nullptr) {
		cout << "| " << uniAux->GetNomeUni() << endl;
		uniAux = uniAux->GetProx();
	}
	cout << endl;
}