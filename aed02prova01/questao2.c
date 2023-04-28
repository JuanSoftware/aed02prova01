#include <stdio.h>
#include <stdlib.h>
#include "questao2.h"
void entrada02(int *salario){
    printf("Digite o salario: \n");
    scanf("%d", salario);
}
void processamento02(int *salario, float *salarioBruto){
    if(*salario<2000){
        *salarioBruto = (*salario * 90)/100;
    }
    else{
        *salarioBruto = (*salario * 80)/100;
    }
}
void saida02(float *salarioBruto){
    printf("\nO salario bruto eh %.2f", *salarioBruto);
}
void questao2(void){
    int salario, salarioB;
    entrada02(&salario);
    processamento02(&salario, &salarioB);
    saida02(&salarioB);
}
