//Faça um programa que escreva os números de 10 a 20 na tela, separados por um espaço.
#include<stdio.h>

int main() {
    int num = 20;

    for (int i = 10; i <= num; i++) {
        printf("%d ", i);
    }

    return 0;
}