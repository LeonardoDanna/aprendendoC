#include<stdlib.h>
#include<stdio.h>
#include<locale.h>

int main() {
    setlocale(LC_ALL,"PORTUGUESE");
    float base, altura, area;

    printf("Programa para calcular �rea de tri�ngulo.\n\n");
    fflush(stdout);

    printf("Qual o valor da base do tri�ngulo? ");
    fflush(stdout);
    scanf("%f", &base);
    fflush(stdin);

    printf("Qual o valor da altura do tri�ngulo? ");
    fflush(stdout);
    scanf("%f", &altura);
    fflush(stdin);

    area = (base * altura) / 2;
    printf("\nO tri�ngulo em quest�o tem %f cm de �rea.\n", area);
    fflush(stdout);

    system("PAUSE");
    return 0;
}
