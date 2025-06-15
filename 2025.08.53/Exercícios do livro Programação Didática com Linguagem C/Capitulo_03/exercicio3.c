//Código contendo estrutura condicional switch/case
#include<stdio.h>

int main(){
    char dir;
    printf("Digite uma direção (w,a,s,d): \n");
    scanf("%c", &dir);

    switch(dir){
        case 'w':
            printf("Cima");
            break;
        case 'a':
            printf("Esquerda");
            break;
        case 's':
            printf("Baixo");
            break;
        case 'd':
            printf("Direita");
            break;
        default:
        printf("Comando Inválido");
    }

    return 0;
}