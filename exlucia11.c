#include<stdlib.h>
#include<stdio.h>
#include<locale.h>

int main() {
    setlocale(LC_ALL,"PORTUGUESE");
    float dimensao1, dimensao2, area;

    printf("Programa para calcular a dimensão de um terreno.\n\n");
    fflush(stdout);

    printf("Digite a dimensão do lado 1: ");
    fflush(stdout);
    scanf("%f", &dimensao1);
    fflush(stdin);

    printf("Digite a dimensão do lado 2: ");
    fflush(stdout);
    scanf("%f", &dimensao2);
    fflush(stdin);

    area = dimensao1 * dimensao2;

    printf("\nCom um lado medindo %f e o outro medindo %f o terreno tem %fm² de área\n\n", dimensao1, dimensao2, area);
    fflush(stdout);

    system("PAUSE");
    return 0;
}
