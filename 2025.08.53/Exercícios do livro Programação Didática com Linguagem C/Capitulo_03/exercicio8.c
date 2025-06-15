/* Exercício 5 do capítulo 3:
    Faça um programa que receba o valor de uma compra e um inteiro indicando o tipo do produto internacional.
    Se o tipo digitado for 0 indica que deve ser cobrada taxa de 10% de seu valor. Caso o tipo digitado seja
    qualquer outro número, indica que deve ser cobrada taxa de 20% de seu valor. Ao final, indique qual o valor
    total do produto a ser pago pelo usuário.
*/
#include <stdio.h>

int main() {
    float valorCompra;
    int tipoProduto;
    float valorTotal;
    float taxa;

    printf("Digite o valor da compra: R$ \n");
    scanf("%f", &valorCompra);

    printf("--------   Tipo de Produto Internacional   --------\n");
    printf("0 - Produtos como livros, brinquedos leves e etc.)\n");
    printf("1 - Outros produtos (Ex: Eletronicos, Roupas, Cosmeticos)\n");
    printf("Digite o tipo do produto (0 ou 1): ");
    scanf("%d", &tipoProduto);

    if (tipoProduto == 0) {
        taxa = 0.10;
        valorTotal = valorCompra + (valorCompra * taxa);
        printf("O valor total do produto a ser pago e: R$ %.2f\n", valorTotal);
    } else if(tipoProduto == 1) {
        taxa = 0.20;
        valorTotal = valorCompra + (valorCompra * taxa);
        printf("O valor total do produto a ser pago e: R$ %.2f\n", valorTotal);
    } else {
        printf("Opcao invalida, digite uma opcao valida!");
    }

    return 0;
}