/* Exercício 2 do capítulo 3:
    Faça um programa que peça ao usuário digitar três números reais e imprima o maior número digitado.
Caso os valores sejam iguais, qualquer um deles pode ser impresso.
*/
#include<stdio.h>

int main(){
    float num1, num2, num3, maior;

    printf("Digite o primeiro numero real: \n");
    scanf("%f", &num1);

    printf("Digite o segundo numero real: \n");
    scanf("%f", &num2);

    printf("Digite o terceiro numero real: \n");
    scanf("%f", &num3);

    maior = num1;

    if (num2 > maior) {
        maior = num2;
    }

    if (num3 > maior){
        maior = num3;
    }

    printf("O maior numero digitado foi: %f\n",maior);

    return 0;
}