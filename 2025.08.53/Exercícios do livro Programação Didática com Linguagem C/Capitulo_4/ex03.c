//Faça um programa que peça para o usuário digitar diversos valores de compras não negativos e apresente a soma desses valores quando o usuário digitar o valor zero.
#include<stdio.h>

int main(){
    float compras, soma;
    int i;
    soma = 0;
    printf("Calculo de compras\n");
    do{
        printf("\nDigite o valor da compra: \n");
        scanf("%f", &compras);
        soma = soma + compras;
        printf("\nFinalizar? (0 - Sim | 1 - Não)\n");
        scanf("%d", &i);
    }while (i != 0);
    printf("\nValor Total da Compra: %.2f\n", soma);
    printf("Finalizado.");

    return 0;
}