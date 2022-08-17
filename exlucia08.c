#include<stdlib.h>
#include<stdio.h>
#include<locale.h>

int main() {
    setlocale(LC_ALL,"PORTUGUESE");
    float volume, lado1, lado2, lado3;

    printf("Programa para calcular o volume de um cubo.\n\n");
    fflush(stdout);

    printf("Qual o valor da primeira aresta do quadrado? ");
    fflush(stdout);
    scanf("%f", &lado1);
    fflush(stdin);

    printf("Qual o valor da segunda aresta do quadrado? ");
    fflush(stdout);
    scanf("%f", &lado2);
    fflush(stdin);

    printf("Qual o valor da terceira aresta do quadrado? ");
    fflush(stdout);
    scanf("%f", &lado3);
    fflush(stdin);

    volume = lado1 * lado2 * lado3;
    printf("\nO quadrado em questão tem %f cm³ de volume.\n", volume);
    fflush(stdout);

    system("PAUSE");
    return 0;
}
