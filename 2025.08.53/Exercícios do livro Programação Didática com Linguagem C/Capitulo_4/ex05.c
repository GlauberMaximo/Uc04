/*
Faça um programa que auxilie uma pesquisa a coletar as seguintes informações sobre cada um dos moradores de um bairro: idade (inteiro),
sexo (caractere ‘m’ ou ‘f’) e salário (float). O usuário deverá preencher as informações de cada habitante até que seja digitado o valor 0 para idade. 
Ao final o programa deve calcular e informar os seguintes dados:

a. A maior idade. 
b. A média salarial. 
c. A quantidade de mulheres. 
d. Existe salário abaixo de 500?
*/
#include<stdio.h>

int main(){
    int idade = 0;
    char sexo;
    float salario = 0, menor_salario = 0;
    int maior_idade = 0;
    float media_salario = 0;
    int qtd_mulheres = 0, qtd_pessoas = 0;

    while (1){
        printf("\nDigite a idade (0 para encerrar pesquisa): \n");
        scanf("%d", &idade);

        if (idade == 0){
            printf("Encerrando pesquisa ...\n");
            break;
        }

        if (idade > maior_idade){
            maior_idade = idade;
        }

        printf("Digite o sexo ('f' = Feminino | 'm' = Masculino): \n");
        scanf(" %c", &sexo);

        if (sexo == 'f' || sexo == 'F') {
            qtd_mulheres++;
        }

        printf("Digite o salário: \n");
        scanf("%f", &salario);
        media_salario += salario;

        if (salario <= 500) {
            if (menor_salario == 0 || salario < menor_salario){
                menor_salario = salario;
            }
        }

        qtd_pessoas++;
    }

    if (qtd_pessoas == 0){
        printf("\nNão foi registrado nada na pesquisa.\n");
    } else {
        printf("\nA maior idade registrada foi: %d\n", maior_idade);
        printf("A média Salarial é: %.2f\n", media_salario / qtd_pessoas);
        printf("A quantidade de mulheres: %d\n", qtd_mulheres);
        if (menor_salario == 0) {
            printf("Não foi registrado nenhum salário abaixo de R$500,00\n");
        } else {
            printf("O menor salário registrado na pesquisa foi: %.2f\n", menor_salario);
        }
    }

    return 0;
}
