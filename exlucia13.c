#include<stdlib.h>
#include<stdio.h>
#include<locale.h>

int main() {
    setlocale(LC_ALL,"PORTUGUESE");
    float num, hora, minuto, segundo;

    printf("Programa que converte segundos em horas, minutos e segundos.\n\n");
    fflush(stdout);

    printf("Digite os segundos: ");
    fflush(stdout);
    scanf("%f", &num);
    fflush(stdin);

    hora = num / 60;

    printf("\nhora: %f\n\n", hora);
    fflush(stdout);

    system("PAUSE");
    return 0;
}
