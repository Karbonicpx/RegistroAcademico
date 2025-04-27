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

    // Construtor sem parâmetros
    Aluno();
    // Destrutor
    ~Aluno();
 
    // Funções get
    char* GetRa();
    char* GetNome();

    // Funções set
    void SetUniversidadeAtual(Universidade* universidadeParam);

};

#endif // ALUNO_H