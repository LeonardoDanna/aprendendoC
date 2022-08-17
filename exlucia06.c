#include<stdlib.h>
#include<stdio.h>
#include<locale.h>

int main() {
    setlocale(LC_ALL,"PORTUGUESE");
    float perimetro, lado1, lado2, lado3;

    printf("Programa para calcular o perímetro de um triângulo.\n\n");
    fflush(stdout);

    printf("Qual o valor do primeiro lado do triângulo? ");
    fflush(stdout);
    scanf("%f", &lado1);
    fflush(stdin);

    printf("Qual o valor do segundo lado do triângulo? ");
    fflush(stdout);
    scanf("%f", &lado2);
    fflush(stdin);

    printf("Qual o valor do terceiro lado do triângulo? ");
    fflush(stdout);
    scanf("%f", &lado3);
    fflush(stdin);

    perimetro = lado1 + lado2 + lado3;
    printf("\nO triângulo em questão tem %f cm de perímetro.\n", perimetro);
    fflush(stdout);

    system("PAUSE");
    return 0;
}
