#include<stdlib.h>
#include<stdio.h>
#include<locale.h>

int main() {
    setlocale(LC_ALL,"PORTUGUESE");
    float a, b, c;

    printf("Programa para calcular o maior valor entre os 3.\n\n");
    fflush(stdout);

    printf("Qual o valor do primeiro numero? ");
    fflush(stdout);
    scanf("%f", &a);
    fflush(stdin);

    printf("Qual o valor do segundo numero? ");
    fflush(stdout);
    scanf("%f", &b);
    fflush(stdin);

    printf("Qual o valor do terceiro numero? ");
    fflush(stdout);
    scanf("%f", &c);
    fflush(stdin);

    if (a > b & b > c) {
        printf("O maior número é %f.\n", a);
        fflush(stdout);
    }
    else
    if (b > c & b > a) {
        printf("O maior número é %f.\n", b);
        fflush(stdout);
    }
    else
        printf("O maior número é %f.\n", c);
        fflush(stdout);

    system("PAUSE");
    return 0;
}
