#include<stdlib.h>
#include<stdio.h>
#include<locale.h>

int main() {
    setlocale(LC_ALL,"PORTUGUESE");
    int num, dobro;

    printf("Escreva o n�mero: ");
    fflush(stdout);
    scanf("%i",&num);
    fflush(stdin);

    dobro = num * 2;
    printf("O dobro do n�mero %i � %i.\n",num,dobro);
    fflush(stdout);

    system("PAUSE");
    return 0;
}
