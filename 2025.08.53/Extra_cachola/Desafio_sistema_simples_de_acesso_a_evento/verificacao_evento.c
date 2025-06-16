#include <stdio.h> // biblioteca para entrada e saída de dados, para usar printf e scanf
#include <string.h> // biblioteca de manipulação de strings para usar fgets

int main() {
    char nome[100]; // Declara uma variável para armazenar o nome (até 99 caracteres + nulo)
    int idade, temIngresso; // Declara uma variável para armazenar a idade e uma para armazenar se tem ingresso

    // Solicita e lê o nome do usuário
    printf("Bem-vindo ao controle de acesso do evento!\n");
    printf("Por favor, digite seu nome (sem espacos, ex: JoaoSilva): \n");
    // Usa fgets para ler a linha inteira, incluindo espaços
    // stdin é o fluxo de entrada padrão (teclado)
    fgets(nome, sizeof(nome), stdin);

    // verifica idade e se o usuário possui ingresso
    printf("Digite sua idade: \n");
    scanf("%d", &idade);

    printf("Voce possui ingresso? (1 para Sim, 0 para Nao): \n");
    scanf("%d", &temIngresso); 

    // --- Estruturas Condicionais para Verificacao de Acesso ---

    // verifica a idade e(&&) se usuário possui ingresso
    if (idade >= 18 && temIngresso == 1) {
        printf("Ola, %s! Entrada permitida. Aproveite o evento!\n", nome);
    }
    // Caso não possuir ingresso, notifica que é necessário ter o ingresso 
    else if (temIngresso == 0) {
        printf("E necessario possuir ingresso para entrar.\n");
    }
    // Caso não possuir ingresso ou a idade for igual ou inferior a 17, executará o else
    else {
        printf("Entrada nao permitida para menores de idade.\n");
    }

    return 0;
}