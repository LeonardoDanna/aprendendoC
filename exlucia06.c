#include<stdlib.h>
#include<stdio.h>
#include<locale.h>

int main() {
    setlocale(LC_ALL,"PORTUGUESE");
    float perimetro, lado1, lado2, lado3;

    printf("Programa para calcular o per�metro de um tri�ngulo.\n\n");
    fflush(stdout);

    printf("Qual o valor do primeiro lado do tri�ngulo? ");
    fflush(stdout);
    scanf("%f", &lado1);
    fflush(stdin);

    printf("Qual o valor do segundo lado do tri�ngulo? ");
    fflush(stdout);
    scanf("%f", &lado2);
    fflush(stdin);

    printf("Qual o valor do terceiro lado do tri�ngulo? ");
    fflush(stdout);
    scanf("%f", &lado3);
    fflush(stdin);

    perimetro = lado1 + lado2 + lado3;
    printf("\nO tri�ngulo em quest�o tem %f cm de per�metro.\n", perimetro);
    fflush(stdout);

    system("PAUSE");
    return 0;
}
