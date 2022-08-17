#include<stdlib.h>
#include<stdio.h>
#include<locale.h>

int main() {
    setlocale(LC_ALL,"PORTUGUESE");
    int premio, primeiroGanhador, segundoGanhador, terceiroGanhador;

    printf("Programa para calcular a divisão de prêmio.\n\n");
    fflush(stdout);

    printf("Digite o valor do prêmio: ");
    fflush(stdout);
    scanf("%i", &premio);
    fflush(stdin);

    primeiroGanhador = (premio / 100) * 46;
    segundoGanhador = (premio / 100) * 32;
    terceiroGanhador = (premio / 100) * 22;

    printf("\nO primeiro ganhador ficou com R$%i. \nO segundo ganhador ficou com R$%i.\nO terceiro ganhador ficou com R$%i.\n\n", primeiroGanhador, segundoGanhador, terceiroGanhador);
    fflush(stdout);

    system("PAUSE");
    return 0;
}
