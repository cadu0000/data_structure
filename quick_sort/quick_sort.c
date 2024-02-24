#include <stdio.h>

void quickSort(int* vetor, int pivo, int a, int b){
    int x;
    while(vetor[pivo]<vetor[a]){
        a++;
    }
    while(vetor[pivo]>vetor[b]){
        b--;
    }
    if(b-a==1){
        x = vetor[b];
        vetor[b] = vetor[a];
        vetor[a] = x;
    }
    quickSort(vetor, pivo, b, a);
    
}

int main(){
    int vetor[10] = {5, 4, 3, 8, 7, 9, 0, 1, 2};

    quickSort(vetor, vetor[0], vetor[1], vetor[9]);

    return 0;
}