#include<stdio.h>


struct Vetor{
float x;
float y;
float z;
};


int main(){
    struct Vetor vetor[2], soma;
     
    for(int i = 0; i < 2; i++){
        scanf("%f %f %f", &vetor[i].x, &vetor[i].y, &vetor[i].z);
    }

    soma.x = vetor[0].x + vetor[1].x;
    soma.y = vetor[0].y + vetor[1].y;
    soma.z = vetor[0].z + vetor[1].z;

    printf("Soma dos vetores %.2f %.2f %.2f\n", soma.x, soma.y, soma.z);
    return 0;
}
