#include <stdio.h>

void buscaBinaria(int* vetor, int procurado, int tamanhoDoVetor){
    int max = tamanhoDoVetor;
    int min = 0;
    int meio = vetor[tamanhoDoVetor/2];

    while(max-min!=1){
        if (vetor[meio] == procurado){
            printf("O %d está na posição %d", procurado, meio);
            return;
        }
        if (vetor[meio] < procurado){
            min = meio;
        }
        if (vetor[meio] > procurado){
            max = meio;
        }
        if(max+min%2==0){
            meio = (max+min)/2;
        }else {
            meio = (max+min+1)/2;
        }
    }
    printf("valor não encontrado");
}
int main(){
    int vetor[10] = {2, 4, 6, 8, 10, 12, 14, 16, 20, 22};
    buscaBinaria(vetor, 121, 10);
    return 0;
}