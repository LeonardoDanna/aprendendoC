#include<stdlib.h>
#include<stdio.h>
#include<locale.h>

int main() {
    setlocale(LC_ALL,"PORTUGUESE");
    int hora, minuto;

    printf("Programa para converter horas em minutos.\n\n");
    fflush(stdout);

    printf("Digite um horário: ");
    fflush(stdout);
    scanf("%i", &hora);
    fflush(stdin);

    minuto = hora * 60;
    printf("%i hora(s) dá %i minuto(s).\n", hora, minuto);
    fflush(stdout);

    system("PAUSE");
    return 0;
}
