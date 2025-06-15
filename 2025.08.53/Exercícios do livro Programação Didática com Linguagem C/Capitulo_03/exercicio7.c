/* Exercício 4 do capítulo 3:
    Faça um programa que peça ao usuário digitar um número inteiro de 1 a 4 (inclusive) e receba uma mensagem
    personalizada de acordo com o número digitado.
*/
#include <stdio.h>

int main() {
    int opcao;

    printf("Escolha uma opcao de saudacao:\n");
    printf("1 - Bom dia\n");
    printf("2 - Boa tarde\n");
    printf("3 - Boa noite\n");
    printf("4 - Prazer em te Conhecer\n");
    printf("Digite o numero da sua opcao: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            printf("Bom dia! Que voce tenha um belo dia.\n");
            break;
        case 2:
            printf("Boa tarde! Espero que voce tenha uma otima tarde.\n");
            break;
        case 3:
            printf("Boa noite! Te desejo um bom descanso.\n");
            break;
        case 4:
            printf("Saudacoes! E um prazer te conhecer.\n");
            break;
        default:
            printf("Opcao invalida. Por favor, digite um numero entre 1 e 4.\n");
            break;
    }

    return 0;
}