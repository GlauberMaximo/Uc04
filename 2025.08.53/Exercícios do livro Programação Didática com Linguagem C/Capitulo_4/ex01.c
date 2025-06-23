//Faça um programa que peça para o usuário digitar diversos números inteiros até que um dos números seja negativo.
#include<stdio.h>

int main(){
    int num = 1;

    while (num > 0){
        printf("Digite um número inteiro (negativo para finalizar): ");
        scanf("%d", &num);
    }
    
    printf("Programa Finalizado.");
    return 0;
}