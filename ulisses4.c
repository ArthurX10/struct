#include<stdio.h>
#include<stdlib.h>

typedef struct{
    int matricula; 
    char nome[50];
    int nota[3];
    float media;
    
}Aluno; 

int main(){
    Aluno aluno[5];
    int maior = 0;
    float mm = 0, ml= 1000;
    for(int i = 0; i < 5; i++){
        int soma = 0;
        printf("NOME: ");
        scanf(" %[^\n]", aluno[i].nome);
        printf("MATRICULA: ");
        scanf("%d", &aluno[i].matricula);
       
       for(int j = 0; j < 3; j++){
           printf("NOTA %d: ", j + 1);
           scanf("%d", &aluno[i].nota[j]);
            soma += aluno[i].nota[j];
            if(aluno[i].nota[j] > maior){
                maior = aluno[i].nota[0];
            }
       }
        aluno[i].media = soma/3;
        if(aluno[i].media > mm){
            mm = aluno[i].media;
        } 

        if(aluno[i].media < mm){
            ml = aluno[i].media;
        } 
         system("cls");
    }
    
    
    
     printf("\nDados dos usuarios:\n");
    for (int i = 0; i < 5; i++) {
        printf("\nUsuario %d:\n", i + 1);
        printf("Nome: %s\n", aluno[i].nome);
        printf("Matricula: %d\n", aluno[i].matricula);
        printf("Media: %f\n", aluno[i].media);
    }

    printf("\n");
    printf("aluno com maior nota da primeira prova: %d\n", maior);
    printf("MAIOR MEDIA GERAL: %.2f\n", mm);
    printf("MENOR MEDIA GERAL: %.2f\n", ml);

}
