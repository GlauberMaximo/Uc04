#include<stdio.h>

int main(){
    //Variáveis
    int idade = 20;
    float valorDoPgto = 12.42;
    double velParticula = 2.92817029837;
    char tipoHabMotor = 'A';

    //Instruções
    printf("Informe a Idade");
    scanf("%d", &idade);

    printf("Informe o valor do pagamento");
    scanf("%f", &valorDoPgto);

    printf("Informe a velocidade da partícula");
    scanf("%lf", &velParticula);

    printf("Informa o tipo da Habilitação");
    scanf("%c", &tipoHabMotor);

    printf("Dados Informados");
    
    printf("Idade: %d", &idade);
    printf("Valor do Pagamento: %f", &valorDoPgto);
    printf("Velocidade da Partícula: %lf", &velParticula);
    printf("Tipo de Habilitação: %c", &tipoHabMotor);

    return 0;
}