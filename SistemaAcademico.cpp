#include "SistemaAcademico.h"
#include "Universidade.h"
#include "Menu.h"

SistemaAcademico::SistemaAcademico() {
	// Construtor padrão
	objMenu = new Menu();
	universidadeProx = nullptr;
	universidadeAtual = nullptr;

}

SistemaAcademico::~SistemaAcademico() {
	// Destrutor padrão
	delete(objMenu);
	universidadeProx = nullptr;
	universidadeAtual = nullptr;
}

void SistemaAcademico::IncluirUniversidade(Universidade* universidadeIncluida) {
	// Inclui uma universidade no sistema acadêmico
	if (universidadeAtual == nullptr) {
		universidadeAtual = universidadeIncluida;
		universidadeProx = universidadeIncluida;
	}
	else {
		universidadeProx->SetProximaUniversidade(universidadeIncluida);
		universidadeAtual = universidadeProx->GetProximaUniversidade();
	}
}

Menu* SistemaAcademico::GetMenu() {
	return objMenu;
}