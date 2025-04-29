#ifndef ALUNO_H
#define ALUNO_H


class Disciplina;
class Aluno {

private:
    char ra[15];
    char nome[15];
    Disciplina* disciplina;
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
    void SetDisciplina(Disciplina* disciplinaParam);
	void SetRa(const char* raParam);
    void SetNome(const char* nomeParam);

    Aluno* prxAluno;
};

#endif // ALUNO_H