//Objetivo: criar um programa que tenha uma entrada de dois números inteiros e a saída de 1 número inteiro após realizar a subtração dos dois primeiros números.
#include<stdio.h>

int main(){
    int num1, num2, subtracao;

    printf("Insira o primeiro número: ");
    scanf("%d", &num1);
    printf("Insira o segundo número: ");
    scanf("%d", &num2);

    subtracao = num1 - num2;

    printf("Resultado da subtracao: %d", subtracao);

    return 0;
}