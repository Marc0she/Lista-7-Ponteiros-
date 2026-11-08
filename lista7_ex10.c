/*
Marcos Henrique Alves
08.11.2026
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif



typedef struct{
    float volume;
    float area;
}TEsfera;

void calc_esfera(float r, float *area, float *volume);

int main(){
    TEsfera esfera;
    float raio;
    printf("Digite o tamanho raio da esfera: \n");
    scanf("%f", &raio);
    calc_esfera(raio, &esfera.area, &esfera.volume);
    printf("Para uma esfera de raio %.2f: \n  Volume: %.2f;\n  Area: %.2f\n", raio, esfera.volume, esfera.area);

}
void calc_esfera(float r, float *area, float *volume){
    *area = 4 * M_PI * pow(r,2);
    *volume =  (4.0f / 3.0f) *  M_PI * pow(r,3);
}