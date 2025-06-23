//Faça um programa que peça para o usuário digitar um número inteiro de 1 a 10 e gere sua respectiva tabuada de multiplicação.
#include<stdio.h>

int main(){
    int a;
    printf("Digite o numero de 1 a 10 para gerar a tabuada: \n");
    scanf("%d", &a);
    printf("Tabuada de %d\n", a);
    for (int i = 1; i <= 10; i++){
        printf(" %d x %d = %d\n", i, a, i * a);
    }
    return 0;
}