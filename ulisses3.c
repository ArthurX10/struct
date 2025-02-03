#include<stdio.h>
#include<stdlib.h>

typedef struct{
    char nome[50];
    int matricula;
    char curso[50];
    
}Usuario; 

int main(){
    Usuario usuarios[5];
    
    for(int i = 0; i < 5; i++){
        
        printf("NOME: ");
        scanf(" %[^\n]", usuarios[i].nome);
        printf("MATRICULA: ");
        scanf("%d", &usuarios[i].matricula);
        printf("CURSO: ");
        scanf(" %[^\n]", usuarios[i].curso);
        
    }
    
    
     printf("\nDados dos usuarios:\n");
    for (int i = 0; i < 5; i++) {
        printf("\nUsuario %d:\n", i + 1);
        printf("Nome: %s\n", usuarios[i].nome);
        printf("Idade: %d\n", usuarios[i].matricula);
        printf("Email: %s\n", usuarios[i].curso);
    }
}
