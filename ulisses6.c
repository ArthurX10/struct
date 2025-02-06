#include<stdio.h>
#include<stdlib.h>

typedef struct{
    int matricula;
    int dis; 
    char nome[50];
    int nota[2];
    float media;
    
}Aluno; 


int main(){
    Aluno aluno[2];
     int soma[2], media[2];
    for(int i = 0; i < 2; i++){
        printf("MATRICULA: ");
        scanf("%d", aluno[i].matricula);
        printf("NOME: ");
        scanf(" %[^\n]", aluno[i].nome);
        printf("CODIGO DA DISCIPLINA: ");
        scanf(" %d", aluno[i].dis);

        for(int j = 0; j < 2; j++){
            printf("NOTA %d: ", j +1);
            scanf(" %d", aluno[i].nota[j]);
        }

        soma[i] = (aluno[i].nota[0] * 1) + (aluno[i].nota[1]);
        media[i] = soma[i] / 2; 
        
        }
        system("cls");

        printf("\n --------- DADOS DOS ALUNOS ----------- \n");
        for(int i = 0; i < 2 ; i++){
            printf("NOME : %s\n", aluno[i].nome);
            printf("%.2f\n", aluno[i].media);
        }
}