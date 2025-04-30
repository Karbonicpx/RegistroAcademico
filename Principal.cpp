#include "Principal.h"
#include "SistemaAcademico.h"
#include "Menu.h"

Principal::Principal() {
	objSistemaAcademico = new SistemaAcademico();
}

Principal::~Principal() {
	delete(objSistemaAcademico);
}

void Principal::ExecutarPrograma() {
	Menu* menu = objSistemaAcademico->GetMenu();
	menu->MenuInicial();
}