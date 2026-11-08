/*
Marcos Henrique Alves
08.11.2026
*/
#include <stdio.h>
int main(){
    float endereco[15];
    int i;
    for (i = 0; i < 15; i++){
        endereco[i]= (float) (i+1); //converte automaticamente i para float, ou pode usar (float)
    }
    printf("Conteudo do vetor: \n");
    for (i = 0; i < 15; i++){
        printf("%.2f, ", endereco[i]);
    }
    printf("Endereco do conteudo(em hexadecimal): \n");
    for (i = 0; i < 15; i++){
        printf("%p, ", &endereco[i]);
    }

}