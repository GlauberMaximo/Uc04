//código contendo estrutura condicional if/else
#include<stdio.h>

int main() {
    int idade;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    if (idade < 12) {
        printf("Criança!\n");
    } else if (idade >= 12 && idade <= 18) {
        printf("Adolescente!\n");
    } else {
        printf("Adulto!\n"); 
    }

    return 0;
}