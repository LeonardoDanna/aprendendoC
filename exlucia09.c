#include<stdlib.h>
#include<stdio.h>
#include<locale.h>

int main() {
    setlocale(LC_ALL,"PORTUGUESE");
    int num, soma1, soma2, resultado;

    printf("Programa para calcular um número.\n\n");
    fflush(stdout);

    printf("Digite um número: ");
    fflush(stdout);
    scanf("%i", &num);
    fflush(stdin);

    soma1 = (3 * num) + 1;
    soma2 = (2 * num) - 1;
    resultado = soma1 + soma2;
    printf("\nA soma do sucessor de seu triplo com o antecessor de seu dobro é %i.\n", resultado);
    fflush(stdout);

    system("PAUSE");
    return 0;
}
