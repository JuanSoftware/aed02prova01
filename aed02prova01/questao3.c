#include <stdio.h>
#include <stdlib.h>

void entrada03(int *valor, int *pago){
    printf("Digite o valor: \n");
    scanf("%d", valor);
    printf("Digite o valor pago: \n");
    scanf("%d", pago);
}
void processamento03(int *valor,int *pago, int *troco, int *troco100, int *troco10, int *troco1){
    *troco = *valor - *pago;
    *troco100= *valor/100;
    *troco10= *valor -(*valor * 100* *troco100)/10;
    *troco1= *valor -(*valor * 10* *troco100)/1;
}
void saida03(int *troco100, int *troco10, int *troco1){
    printf("%d  %d  %d", *troco100, *troco10, *troco1);
}
void questao03(void){
    int valor, pago, troco, troco100, troco10, troco1;
    entrada03(&valor, &pago);
    processamento03(&valor,&pago,&troco, &troco1, &troco10, &troco100);
    saida03(&troco100, &troco10, troco1);
}
