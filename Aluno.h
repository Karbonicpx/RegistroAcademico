#ifndef ALUNO_H
#define ALUNO_H

class Disciplina;
class Aluno {

private:
    char ra[15];
    char nome[15];
    Disciplina* disciplina;
    Aluno* prxAluno;
public:
  
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

    
};

#endif // ALUNO_H