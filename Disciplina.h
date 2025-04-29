#ifndef DISCIPLINA_H
#define DISCIPLINA_H
class Departamento;
class Aluno;

class Disciplina {

private:

	Aluno* proximoAluno;
	Aluno* alunoAtual;
	Departamento* departamentoAssociado;
	char nomeDisciplina [30];
	int numAlunos;
	int contAlunos;


public:
	Disciplina(int numAlunosParam = 45);
	~Disciplina();

	void IncluirAluno(Aluno* alunoIncluido);

	// Fun��es get
	char* GetNomeDisciplina();
	Departamento* GetDptAssociado();
	// Fun��es set
	void SetNomeDisciplina(const char* nomeDisciplinaParam);
	void SetDptAssociado(Departamento* dptParam);
	
	Disciplina* prxDisciplina;
};
#endif
