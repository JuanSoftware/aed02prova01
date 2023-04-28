#include <stdio.h>
#include <stdlib.h>
#include "questao1.h"

void entrada01(float *raio){
    printf("\nDigite o raio: \n");
    scanf("%f", raio);
}
void processamento01(float *raio, float *diametro, float *perimetro, float *area, float *volume){
    *diametro = 2 * *raio;
    *perimetro = 2 * 3.14 * *raio;
    *area = 3.14 * *raio * *raio;
    *volume = 4* 3.14 * (*raio * *raio * *raio);

}
void saida01(float *diametro, float *perimetro, float *area, float *volume){
    printf("\n %.2f %.2f %.2f %.2f\n", *diametro, *perimetro, *area, *volume);
}
void questao1(void){
    int raio, diametro, perimetro, area, volume;
    entrada01(&raio);
    processamento01(&raio, &diametro, & area, &perimetro,&volume);
    saida01(&diametro, &area, &perimetro, &volume);
}
