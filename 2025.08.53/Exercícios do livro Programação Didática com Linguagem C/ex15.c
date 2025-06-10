//5.b)
//Objetivo: identificar os problamas no código
#include<stdio.h>

int main() {
    int a = 1;
    printf("Digite o valor");
    scanf("%d", &a);// anteriormente o 'a' não tinha o `&`, assim impossibilitando de scanear a informação e inseri-la na variável 'a'
    printf("a = %d\n", a);

    return 0;
}