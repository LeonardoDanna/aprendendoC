#include<stdlib.h>
#include<stdio.h>
#include<locale.h>

int main() {
    setlocale(LC_ALL,"PORTUGUESE");
    float soma, lado1, lado2;

    printf("Programa para somar.\n\n");
    fflush(stdout);

    printf("Qual o primeiro valor? ");
    fflush(stdout);
    scanf("%f", &lado1);
    fflush(stdin);

    printf("Qual o segundo valor? ");
    fflush(stdout);
    scanf("%f", &lado2);
    fflush(stdin);

    soma = lado1 + lado2;

    if(soma > 10) {
        printf("\nA soma dos lados da mais que 10.\n");
        fflush(stdout);
    }
    else {
        printf("\nA soma dos lados da menos que 10.\n");
        fflush(stdout);
    }

    system("PAUSE");
    return 0;
}
