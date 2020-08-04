#include <stdio.h>
#include <stdlib.h>
#include "aluno.h"

    
int main() {
        
        int n = 5;
        
        Aluno* turma[n];
        
        float media; 
        
        char *nome;
        
        float notaFinal; 
        
       
        
        int matricula;
        
        int i = 0;
     
        turma[i] = criaAluno();
        setNome(turma[i], "Alice");
        setIdade(turma[i], 16);
        setNota1(turma[i], 8);
        setNota2(turma[i], 4);
        setMatricula(turma[i], 111);
        setQuantidadeFaltas(turma[i], 6);
        int qtdF = getQuantidadeFaltas(turma[i]);
        matricula = getMatricula(turma[i]);
        media = calcularMedia(turma[i]);
        printf("\nA media e nota final de %s foi: %.2f \n", getNome(turma[i]), media);
         if(media >= 7){
        	printf("Aprovado por nota !\n");
             }else{
                 printf("Reprovado por nota! Precisa fazer avaliacao final. \n");
                }
        printf("Matricula: %d \n",getMatricula(turma[i]));
        printf("Idade: %d \n", getIdade(turma[i]));
        printf("A quantidade de faltas: %d \n", qtdF);
          if(qtdF <= 8){
       		 printf("Aprovado por faltas !\n");
   			 	}else{
       				 printf("Reprovado por falta ! \n");
   					 }
        i += 1;
        
		turma[i] = criaAluno();
        setNome(turma[i], "Andre");
        setIdade(turma[i], 15);
        setNota1(turma[i], 6);
        setNota2(turma[i], 10);
        setMatricula(turma[i], 222);
        setQuantidadeFaltas(turma[i], 9);
        qtdF = getQuantidadeFaltas(turma[i]);
        matricula = getMatricula(turma[i]);
        media = calcularMedia(turma[i]);
        printf("\nA media e nota final de %s foi: %.2f \n", getNome(turma[i]), media);
         if(media >= 7){
        	printf("Aprovado por nota !\n");
             }else{
                 printf("Reprovado por nota! Precisa fazer avaliacao final. \n");
                }
        printf("Matricula: %d \n",getMatricula(turma[i]));
        printf("Idade: %d \n", getIdade(turma[i]));
        printf("A quantidade de faltas: %d \n", qtdF);
          if(qtdF <= 8){
       		 printf("Aprovado por faltas !\n");
   			 	}else{
       				 printf("Reprovado por falta ! \n");
   					 }
        i += 1;
        
        turma[i] = criaAluno();
        setNome(turma[i], "Daniele");
        setIdade(turma[i], 17);
        setNota1(turma[i], 9);
        setNota2(turma[i], 7);
        setMatricula(turma[i], 333);
        setQuantidadeFaltas(turma[i], 4);
        qtdF = getQuantidadeFaltas(turma[i]);
        matricula = getMatricula(turma[i]);
        media = calcularMedia(turma[i]);
        printf("\nA media e nota final de %s foi: %.2f \n", getNome(turma[i]), media);
         if(media >= 7){
        	printf("Aprovado por nota !\n");
             }else{
                 printf("Reprovado por nota! Precisa fazer avaliacao final. \n");
                }
        printf("Matricula: %d \n",getMatricula(turma[i]));
        printf("Idade: %d \n", getIdade(turma[i]));
        printf("A quantidade de faltas: %d \n", qtdF);
          if(qtdF <= 8){
       		 printf("Aprovado por faltas !\n");
   			 	}else{
       				 printf("Reprovado por falta ! \n");
   					 }
        i += 1;
     
	    turma[i] = criaAluno();
        setNome(turma[i], "Renata");
        setIdade(turma[i], 16);
        setNota1(turma[i], 4);
        setNota2(turma[i], 9);
        setMatricula(turma[i], 444);
        setQuantidadeFaltas(turma[i], 8);
        qtdF = getQuantidadeFaltas(turma[i]);
        matricula = getMatricula(turma[i]);
        media = calcularMedia(turma[i]);
        printf("\nA media e nota final de %s foi: %.2f \n", getNome(turma[i]), media);
         if(media >= 7){
        	printf("Aprovado por nota !\n");
             }else{
                 printf("Reprovado por nota! Precisa fazer avaliacao final. \n");
                }
        printf("Matricula: %d \n",getMatricula(turma[i]));
        printf("Idade: %d \n", getIdade(turma[i]));
        printf("A quantidade de faltas: %d \n", qtdF);
          if(qtdF <= 8){
       		 printf("Aprovado por faltas !\n");
   			 	}else{
       				 printf("Reprovado por falta ! \n");
   					 }
        i += 1;
     
	    turma[i] = criaAluno();
        setNome(turma[i], "Joaquim");
        setIdade(turma[i], 15);
        setNota1(turma[i], 9);
        setNota2(turma[i], 8);
        setMatricula(turma[i], 555);
        setQuantidadeFaltas(turma[i], 2);
        qtdF = getQuantidadeFaltas(turma[i]);
        matricula = getMatricula(turma[i]);
        media = calcularMedia(turma[i]);
        printf("\nA media e nota final de %s foi: %.2f \n", getNome(turma[i]), media);
         if(media >= 7){
        	printf("Aprovado por nota !\n");
             }else{
                 printf("Reprovado por nota! Precisa fazer avaliacao final. \n");
                }
        printf("Matricula: %d \n",getMatricula(turma[i]));
        printf("Idade: %d \n", getIdade(turma[i]));
        printf("A quantidade de faltas: %d \n", qtdF);
         if(qtdF <= 8){
       		 printf("Aprovado por faltas !\n");
   			 	}else{
       				 printf("Reprovado por falta ! \n");
   					 }
    	
    	
    
    	int aVelho = 0;
        int maior = 0;
        for(i = 0; i <  n; i++){
        	
            if(getIdade(turma[i]) > maior){
                maior = getIdade(turma[i]);
                aVelho = i;
            }
        }
		
    	printf("\nAluno mais velho eh %s com %d anos \n", getNome(turma[aVelho]), maior);
    	
        float mediaT;

        for(i = 0; i < n; i++){
                mediaT += calcularMedia(turma[i]);
        }
        printf("Media da turma eh: %.2f \n", mediaT/n);
                
        
        int somaF = 0;
        for(i = 0; i < n; i++){

        somaF += getQuantidadeFaltas(turma[i]);
        
        }
        printf("Numero de faltas da turma: %d \n", somaF);
         
        printf("Media de faltas da turma: %d \n", somaF/n);
                        
              
        printf("\n-------- Lista de aprovados -------\n");
        for(i = 0; i < n; i++){
                if(calcularMedia(turma[i]) >= 7){
                        printf("%s\n", getNome(turma[i]));
                }
        }
        printf("-----------------------------------\n");
          
          
        
        printf("-------- Lista de Reprovados -------\n");
        for(i = 0; i < n; i++){
                if(calcularMedia(turma[i]) <= 7){
                        printf("%s \n", getNome(turma[i]));
                }
        }
                      
        return 1;
}
