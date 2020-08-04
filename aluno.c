#include <stdio.h>
#include <stdlib.h>
#include "aluno.h"

struct aluno {
    char *nome;
    int idade;
    int matricula;
    float nota1;
    float nota2;
    float notaFinal;
    int quantidadeFaltas;
};

Aluno *criaAluno() {
    Aluno *a = (Aluno*) malloc(sizeof(Aluno));
    return a;
}

char* getNome(Aluno* aluno){
    return aluno->nome;
}

void setNome(Aluno* aluno, char *nome){
    aluno->nome = nome;
}

int getIdade(Aluno* aluno){
    return aluno->idade;
}

void setIdade(Aluno* aluno, int idade){
    aluno->idade = idade;
}

int alunoVelho(Aluno* a1, Aluno *a2){

        if(a1->idade > a2->idade) {
        printf("Aluno mais velho eh: %s com %d anos.\n", a1->nome, a1->idade);    
    } 
}
    
int getMatricula(Aluno* aluno){
    return aluno->matricula;
}

void setMatricula(Aluno* aluno, int matricula){
    aluno->matricula = matricula;
}

float getNota1(Aluno* aluno){
    return aluno->nota1;
}

void setNota1(Aluno* aluno, float nota1){
    aluno->nota1 = nota1;
}

float getNota2(Aluno* aluno){
    return aluno->nota2;
}

void setNota2(Aluno* aluno, float nota2){
    aluno->nota2 = nota2;
}

int getQuantidadeFaltas(Aluno* aluno){
    return aluno->quantidadeFaltas;
}

void setQuantidadeFaltas(Aluno* aluno, int quantidadeFaltas){
    aluno->quantidadeFaltas = quantidadeFaltas;
}

float calcularMedia(Aluno* aluno){
    float media;
    
             return media = (aluno->nota1 + aluno->nota2)/2;    
}

