#include<stdio.h>
#include<stdlib.h>

struct  Horario
{
    int hora, minutos, segundos;
    char compromisso[50];
};

int main(){
    struct Horario horario;

     printf("Informe o horario: (HH/MM/SS): ");
     scanf("%d/%d/%d", &horario.hora, &horario.minutos, &horario. segundos);
     printf("Informe o compromisso: ");
      scanf(" %[^\n]", horario.compromisso);   
     printf("Horario informado: %02d:%02d:%02d para o %s\n", horario.hora, horario.minutos, horario.segundos, horario.compromisso);
}
