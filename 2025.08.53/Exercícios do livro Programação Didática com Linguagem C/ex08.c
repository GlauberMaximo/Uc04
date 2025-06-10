// exemplo de expressões para realizar equações
#include<stdio.h>

int main(){
    int valInt1, valInt2, valIntRes;
    float valFloat, valFLoatRes;

    valInt1 = 5; //insere valor à variável
    valInt2 = 10; //insere valor à variável
    valFloat = 2.7; //insere valor à variável

    valInt1 + valInt2; //função inútil, pois a soma não é aderido a uma variável

    valIntRes = valInt1 + valInt2; //insere a soma a uma variável

    valFLoatRes = valFloat / 1.5; //realiza divisão

    valIntRes ++; // igual valIntRes = valIntRes + 1

    printf("Valor de IntRes: %d\n", valIntRes);//o valor deverá ser 16

    return 0;
}