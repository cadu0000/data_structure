#include <stdio.h>

void buscaSequencial(int* vetor, int procurado, int tamanhoVetor){
    for(int i=0; i<tamanhoVetor; i++){
        if(vetor[i] == procurado){
            printf("O número %d", i);
            return;
        }
    }
    printf("Número não encontrado no vetor");
}

int main(){
    int vetor[10] = {2, 5, 7, 58, 9, 5, 20, 17, 99};
    buscaSequencial(vetor, 9, 10);
    return 0;
}