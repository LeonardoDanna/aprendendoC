#include<stdlib.h>
#include<stdio.h>
#include<locale.h>

int main() {
    setlocale(LC_ALL,"PORTUGUESE");
    float nota1, nota2, media;

    printf("Informe a primeira nota: ");
    fflush(stdout);
    scanf("%f", &nota1);
    fflush(stdin);

    printf("Informe a segunda nota: ");
    fflush(stdout);
    scanf("%f", &nota2);
    fflush(stdin);

    media = (nota1+nota2/2);
    printf("A m�dia entre %f e %f � %f.\n", nota1,nota2,media);
    fflush(stdout);

    system("PAUSE");
    return 0;
}
