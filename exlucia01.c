#include<stdlib.h>
#include<stdio.h>
#include<locale.h>

int main() {
    setlocale(LC_ALL,"PORTUGUESE");
    int num, sucessor, antecessor;

    printf("\nInforme o n�mero: ");
    fflush(stdout);

    scanf("%i", &num);
    fflush(stdin);

    sucessor = num+1;
    antecessor = num-1;

    printf("\nSobre o n�mero %i: seu ANTECESSOR � %i e o SUCESSOR � %i.\n\n", num,antecessor,sucessor);
    fflush(stdout);

    system("PAUSE");
    return 0;
}
