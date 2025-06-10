//Crie duas variáveis ‘a’ e ‘b’ e troque os valores delas. Atribua os valores das variáveis diretamente pelo programa (em vez de ler pelo teclado) e 
//imprima os valores de ‘a’ e ‘b’ antes e depois da troca. Por exemplo, para ’a’ = 1 e ‘b’ = 3, ao final do programa ‘a’ deverá ter 3 e ‘b’ deverá ter 1. 
//Dica: utilize uma variável auxiliar para não perder os valores na hora da troca.
#include<stdio.h>
int main(){
    int a = 1, b = 2, c;

    printf("Valor Das variáveis:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    // Trocando os valores usando a variável auxiliar
    c = a;
    a = b;
    b = c;

    // Valores depois da troca
    printf("\nDepois da troca:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    return 0;
}
