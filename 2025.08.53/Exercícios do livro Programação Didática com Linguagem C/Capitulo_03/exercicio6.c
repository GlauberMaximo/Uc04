/* Exercício 3 do capítulo 3:
    Faça um programa que pergunte ao usuário qual figura bidimensional ele deseja saber a área: círculo ou retângulo.
    Esta opção deve ser registrada em um inteiro, com um valor para círculo e outro para retângulo, sendo informado ao 
    usuário. Caso o círculo seja escolhido, peça para o usuário informar o raio. Caso o retângulo seja escolhido, peça 
    para o usuário digitar a base e a altura. Em seguida informe o valor da área, dependendo da figura escolhida. 
    Obs.: utilize PI como uma constante no valor de 3.1415.
*/
#include <stdio.h>

int main() {
    int opcao;
    float raio, base, altura, area;
    const float PI = 3.1415;

    printf("Qual figura bidimensional voce deseja calcular a area?\n");
    printf("1 - Circulo\n");
    printf("2 - Retangulo\n");
    printf("Digite sua opcao (1 ou 2): ");
    scanf("%d", &opcao);

    if (opcao == 1) {
        printf("Digite o raio do circulo: ");
        scanf("%f", &raio);
        area = PI * (raio * raio);
        printf("A area do circulo eh: %.2f\n", area);
    } else if (opcao == 2) {
        printf("Digite a base do retangulo: ");
        scanf("%f", &base);
        printf("Digite a altura do retangulo: ");
        scanf("%f", &altura);
        area = base * altura;
        printf("A area do retangulo eh: %.2f\n", area);
    } else {
        printf("Opcao invalida. Por favor, digite 1 para Circulo ou 2 para Retangulo.\n");
    }

    return 0;
}