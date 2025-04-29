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

    // Construtor sem par�metros
    Aluno();
    // Destrutor
    ~Aluno();
 
    // Fun��es get
    char* GetRa();
    char* GetNome();

    // Fun��es set
    void SetDisciplina(Disciplina* disciplinaParam);
	void SetRa(const char* raParam);
    void SetNome(const char* nomeParam);

    Aluno* prxAluno;
};

#endif // ALUNO_H