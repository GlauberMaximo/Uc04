//Faça um programa que calcula e imprime na tela a velocidade de um objeto. Os dados (distância e tempo) devem ser informados pelo usuário. Dica: lembre que v = d/t.
#include<stdio.h>

int main(){
    float distancia, tempo, velocidade;

    printf("-----   Calculo de velocidade de um objeto   -----\n");
    printf("Digite a distância em km(digite apenas números): ");
    scanf("%f", &distancia);
    printf("Digite o tempo em horas(digite apenas números): ");
    scanf("%f", &tempo);

    velocidade = distancia / tempo;

    printf("Velocidade do objeto: %f", velocidade);

    return 0;
}