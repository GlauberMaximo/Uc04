// Faça um programa que leia três caracteres do teclado e informe na tela a palavra formada pelos três caracteres em ordem inversa de entrada separados pelo caractere ‘-’.
#include <stdio.h>

int main() {
    char a, b, c;

    printf("Digite três caracteres (sem Enter entre eles): ");
    a = getchar();
    b = getchar();
    c = getchar();

    //alternativo do getchar
    //scanf("%c%c%c", a, b, c);

    printf("Palavra invertida: %c-%c-%c\n", c, b, a);

    return 0;
}
