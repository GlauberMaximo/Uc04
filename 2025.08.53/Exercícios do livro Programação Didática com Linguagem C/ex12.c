//Faça um programa que leia três coeficientes reais a, b e c de uma equação do segundo grau e informe na tela as suas raízes 
//(considere para teste apenas valores que resultem em raízes reais). Dica: utilize a fórmula de Bhaskara.
#include<stdio.h>
#include<math.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "");

    int a, b, c;
    float delta, raiz, x1, x2;

    printf("Calculo de fórmula de Bhaskara\n");
    //inserir valor de a
    printf("Insira o valor de a: ");
    scanf("%d", &a);
    //inserir valor de b
    printf("Insira o valor de b: ");
    scanf("%d", &b);
    //inserir valor de c
    printf("Insira o valor de c: ");
    scanf("%d", &c);

    //calculos
    delta = (b * b) - (4 * a * c);
    raiz = sqrt(delta);
    x1 = (-b - raiz) / (2*a);
    x2 = (-b + raiz) / (2*a);

    printf("Fórmula de Bhaskara: \n");
    printf("x = (-b ± √(b² - 4.a.c)) / 2a \n");
    printf("Fórmula com os valores substituídos: \n");
    printf("x = (-(%d) ± √((%d)² - 4.%d.%d)) / 2%d \n", b, b, a, c, a);
    printf("\n");
    printf("x = (-(%d) ± √(%f)) / 2.%d \n", b, delta, a);
    printf("\n");
    printf("x1 = %f\n", x1);
    printf("x2 = %f\n", x2);

    return 0;
}