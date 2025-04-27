#ifndef ALUNO_H
#define ALUNO_H
#include "Universidade.h"

class Aluno {

private:
    char ra[15];
    char nome[15];
    Universidade* universidadeAtual;
public:
    // Construtor
    Aluno(const char* ra, const char* nome);

    // Construtor sem par�metros
    Aluno();
    // Destrutor
    ~Aluno();
 
    // Fun��es get
    char* GetRa();
    char* GetNome();

    // Fun��es set
    void SetUniversidadeAtual(Universidade* universidadeParam);

};

#endif // ALUNO_H