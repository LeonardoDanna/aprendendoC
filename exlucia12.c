#include<stdlib.h>
#include<stdio.h>
#include<locale.h>

int main() {
    setlocale(LC_ALL,"PORTUGUESE");
    float horarioAtual, tempoPassado, diaInteiro;

    printf("Programa para informar quantos minutos do dia já se passaram.\n\n");
    fflush(stdout);

    printf("Digite o horário atual: ");
    fflush(stdout);
    scanf("%f", &horarioAtual);
    fflush(stdin);

    diaInteiro = 1440;
    tempoPassado = diaInteiro - (horarioAtual * 60);

    printf("\nJá se passaram %f minutos do dia.\n\n", tempoPassado);
    fflush(stdout);

    system("PAUSE");
    return 0;
}
