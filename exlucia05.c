#include<stdlib.h>
#include<stdio.h>
#include<locale.h>

int main() {
    setlocale(LC_ALL,"PORTUGUESE");
    float base, altura, area;

    printf("Programa para calcular área de triângulo.\n\n");
    fflush(stdout);

    printf("Qual o valor da base do triângulo? ");
    fflush(stdout);
    scanf("%f", &base);
    fflush(stdin);

    printf("Qual o valor da altura do triângulo? ");
    fflush(stdout);
    scanf("%f", &altura);
    fflush(stdin);

    area = (base * altura) / 2;
    printf("\nO triângulo em questão tem %f cm de área.\n", area);
    fflush(stdout);

    system("PAUSE");
    return 0;
}
