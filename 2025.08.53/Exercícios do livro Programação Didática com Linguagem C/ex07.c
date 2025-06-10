// exemplo com entrada de dados
#include<stdio.h>

int main(){
    int idade;
    float valorDoPgto;
    double velParticula;
    char tipoHabMotor;

    printf("Informe a idade: ");
    scanf("%d", &idade);
    printf("Informe o valor do pagamento: ");
    scanf("%f", &valorDoPgto);
    printf("Informe a velocidade da particula: ");
    scanf("%lf", &velParticula);
    printf("Informe o tipo da habilitacao: ");
    scanf("%c", &tipoHabMotor);

    printf("Dados informados: %d, %f, %lf, %c\n", idade, valorDoPgto, velParticula, tipoHabMotor);
}