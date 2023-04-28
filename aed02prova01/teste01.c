#include <stdio.h>
#include <stdlib.h>

void entrada02(float *raio){
    printf("Digite o raio: \n");
    scanf("%f", raio);
}
void processamento02(float *raio, float *diametro, float *perimetro, float *area){
        *diametro = 2 * *raio;
        *perimetro = 2 * 3.14 * *raio;
        *area = 3.14 * *raio * *raio;

}
void saida02(float *diametro){
    printf("\ %.2f", *diametro);
}
void questao02(void){
    int raio, diametro, perimetro, area;
    entrada02(&raio);
    processamento02(&raio, &diametro, & area, &perimetro);
    saida02(&diametro);
}

