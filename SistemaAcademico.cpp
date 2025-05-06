#include "SistemaAcademico.h"
#include "ListaUniversidades.h"

SistemaAcademico::SistemaAcademico() {
	
	listaUniversidades = new ListaUniversidades();
}

SistemaAcademico::~SistemaAcademico() {
	delete (listaUniversidades);
}
