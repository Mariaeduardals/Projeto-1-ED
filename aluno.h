/* TAD: Aluno*/
#ifndef ALUNO_H_INCLUDED
#define ALUNO_H_INCLUDED	

	typedef struct aluno Aluno;
	
	Aluno* criaAluno();
	
	char* getNome(Aluno* aluno);

	void setNome(Aluno* aluno, char *nome);
	
	int getIdade(Aluno* aluno);
	
	void setIdade(Aluno* aluno, int idade);
	
	int getMatricula(Aluno* aluno);

	void setMatricula(Aluno* aluno, int matricula);
	
	float getNota1(Aluno* aluno);

	void setNota1(Aluno* aluno, float nota1);
	
	float getNota2(Aluno* aluno);

	void setNota2(Aluno* aluno, float nota2);
	
	int getquantidadeFaltas(Aluno* aluno);
	
	void setQuantidadeFaltas(Aluno* aluno, int quantidadeFaltas);
	
	float calcularMedia(Aluno* aluno);

#endif
