/*
exercício 1 do capítulo 3:
    Faça um programa que peça ao usuário digitar um número inteiro e indique se o número digitado é positivo,
negativo ou nulo.
*/
#include<stdio.h>

int main(){
    int num1;
    printf("-----------------------------\n");
    printf("Numero positivo ou negativo?\n");
    printf("-----------------------------\n");
    printf("Digite um numero: \n");
    scanf("%d", &num1);

    if (num1 < 0)
    {
        printf("Numero negativo!\n");
    } else {
        printf("Numero positivo!\n");
    }
    
    return 0;
}