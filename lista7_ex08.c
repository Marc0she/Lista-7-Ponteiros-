/*
Marcos Henrique Alves
08.11.2026
*/
#include <stdio.h>
#include <stdlib.h>
void multiplicar_por_dois(int* v, int n);
void exibir(int* v, int n);

int main(){
    int* vetor;
    int n, i;
    printf("Digite: \n");
    scanf("%d", &n);
    vetor = malloc(n * sizeof(int));
    if(!vetor){
        printf("Memoria nao alocada\n");
        return 1;
    }
    for(i = 0; i < n; i++){
        printf("Digite o %d numero do vetor: \n", i+1);
        scanf("%d", &vetor[i]);
    }
    multiplicar_por_dois(vetor, n);
    exibir(vetor, n);
    
    free(vetor);

}

void multiplicar_por_dois(int* v, int n){
    int i;
    for(i = 0; i < n; i++){
         v[i] *= 2;
    }
}
void exibir(int* v, int n){
    int i;
    for(i = 0; i < n; i++){
        printf("%d, ", v[i]);
    }
    printf("\n");
}