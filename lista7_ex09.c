/*
Marcos Henrique Alves
08.11.2026
*/
#include <stdio.h>
#include <stdlib.h>
typedef struct{
    char nome[30];
    float salario;
}TFuncionario;
void dobro(float *v);
int main(){
    TFuncionario v;
    printf("Digite o nome do funcionario: \n");
    scanf(" %29[^\n]", v.nome);
    printf("Digite o salario do funcionario: \n");
    scanf("%f", &v.salario);
    dobro(&v.salario);
    printf("O novo salario de %s eh: R$%.2f\n", v.nome, v.salario);

}
void dobro(float *v){
    *v*=2;
}