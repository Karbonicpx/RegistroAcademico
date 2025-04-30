#ifndef PRINCIPAL_H
#define PRINCIPAL_H
class SistemaAcademico;

class Principal {

private:

	SistemaAcademico* objSistemaAcademico;

public:
	Principal();
	~Principal();
	void ExecutarPrograma();

};

#endif
