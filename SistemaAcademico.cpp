#include "SistemaAcademico.h"
#include "Universidade.h"
#include "ListaUniversidade.h"
#include "Menu.h"

SistemaAcademico::SistemaAcademico() {
	// Construtor padr�o
	objMenu = new Menu();
	universidadeProx = nullptr;
	universidadePrim = nullptr;

}

SistemaAcademico::~SistemaAcademico() {
	// Destrutor padr�o
	delete(objMenu);
	
	ListaUniversidade* uniAux = universidadePrim;

	while (uniAux != nullptr) {
		universidadePrim = universidadePrim->ptrProx;
		delete uniAux;
		uniAux = universidadePrim;
	}

	universidadeProx = nullptr;
	universidadePrim = nullptr;
}

void SistemaAcademico::IncluirUniversidade(Universidade* universidadeIncluida) {
	// Inclui uma universidade no sistema acad�mico
	ListaUniversidade* uniAux = nullptr;
	uniAux = new ListaUniversidade();
	uniAux->SetUniversidade(universidadeIncluida);

	if (universidadeProx == nullptr) {
		universidadeProx = uniAux;
		universidadePrim = uniAux;
	}
	else {
		universidadePrim->ptrProx = uniAux;
		universidadePrim = uniAux;
	}
}

Menu* SistemaAcademico::GetMenu() {
	return objMenu;
}