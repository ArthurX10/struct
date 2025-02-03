#include<stdio.h>
#include<stdlib.h>

typedef struct{
    int matricula; 
    char nome[50];
    int nota[3];
    float media
    
}Aluno; 

int main(){
    Aluno aluno[5];
    int soma = 0;
    for(int i = 0; i < 5; i++){
        
        printf("NOME: ");
        scanf(" %[^\n]", aluno[i].nome);
        printf("MATRICULA: ");
        scanf("%d", &aluno[i].matricula);
       
       for(int j = 0; j < 3; j++){
           printf("NOTA %d:\n", j);
           scanf("%d", aluno[i].nota[j]);
            soma =+ aluno[i].nota[j];
       }
        aluno[i].media = soma/3;
    }
    
    
     printf("\nDados dos usuarios:\n");
    for (int i = 0; i < 5; i++) {
        printf("\nUsuario %d:\n", i + 1);
        printf("Nome: %s\n", aluno[i].nome);
        printf("Idade: %d\n", aluno[i].matricula);
        printf("Media: %f\n", aluno[i].media);
    }
}
