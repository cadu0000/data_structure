#include <stdio.h>
#include <stdlib.h>

struct lista{
    int info;
    struct lista *prox;
};
typedef struct lista Lista;

Lista* criar_lista_encadeada(){
    Lista *inicial = NULL;
    Lista* aux;
    int valor;
   
    while(valor != -1){
        aux = (Lista*)malloc(sizeof(Lista));
       
        printf("Escreva o valor: ");
        scanf("%d", &valor);
       
        aux->info = valor;
        aux->prox = inicial;
        inicial = aux;
    }
   
    return inicial;
}

void printar_lista(Lista* lista){
    Lista* aux = lista;
   
    while(aux != NULL){
        printf("%d\n", aux->info);
        aux = aux->prox;
    }
    return;
}

void achar_numero_na_lista(Lista* lista){
    int procurar;
    Lista* aux = lista;
    printf("Escreva o valor que quer encontrar: ");
    scanf("%d", &procurar);
   
    while(aux != NULL){
        if(aux->info == procurar){
            printf("Acheiiiiii\n");
            return;
        }
        aux = aux->prox;
    }
    printf("Não tem!\n");
}

void trocar_y_por_menos_um(Lista* lista){
    int procurar;
    Lista* aux = lista;
    printf("Escreva o valor que quer trocar por -1: ");
    scanf("%d", &procurar);
   
    while(aux != NULL){
        if(aux->info == procurar){
            printf("trocando por -1...\n");
            aux->info = -1;
        }
        aux = aux->prox;
    }
}

void inserir_valor(Lista* lista){
    int valor, posicao;
    Lista* aux = lista;
    printf("Escreva o valor que quer inserir na lista: ");
    scanf("%d", &valor);
    printf("Escreva a posição que você quer inserir esse valor na lista: ");
    scanf("%d", &posicao);
   
    Lista* inserir;
    inserir = (Lista*)malloc(sizeof(Lista));
   
    inserir->info = valor;
   
    for(int i=0; i<posicao; i++){
        aux = aux->prox;
        if(i+1 == posicao){
            inserir->prox = aux->prox;
            aux->prox = inserir;
        }
    }
}

int main()
{
    Lista *lista_inicial= criar_lista_encadeada();
    printar_lista(lista_inicial);
    achar_numero_na_lista(lista_inicial);
    trocar_y_por_menos_um(lista_inicial);
    printar_lista(lista_inicial);
    inserir_valor(lista_inicial);
    printar_lista(lista_inicial);

    return 0;
}
