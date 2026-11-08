/*
Marcos Henrique Alves
08.11.2026
*/
#include <stdio.h>

int main(){
    int n = 5;
    float x = 3.8;
    int *pn = &n;
    float *px = &x;

    printf("Endereco de n = %p | seu conteudo eh %d\n", pn, n);
    printf("Endereco de x = %p | seu conteudo eh %.2f\n", px, x);
    printf("Endereco de pn = %p | seu conteudo eh %p| o conteudo pro qual aponta eh %d\n", (void*)&pn, (void*)pn, *pn);
    printf("Endereco de px = %p | seu conteudo eh %p| o conteudo pro qual aponta eh %.2f\n", (void*)&px, (void*)px, *px);

}