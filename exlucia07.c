#include<stdlib.h>
#include<stdio.h>
#include<locale.h>

int main() {
    setlocale(LC_ALL,"PORTUGUESE");
    float salarioAtual, aumento, salarioNovo;

    printf("Programa para calcular aumento de salário.\n\n");
    fflush(stdout);

    printf("Qual o valor do seu salário atual? ");
    fflush(stdout);
    scanf("%f", &salarioAtual);
    fflush(stdin);

    aumento = (salarioAtual / 100) * 10; //aumento de 10%
    salarioNovo = salarioAtual + aumento;

    printf("\nO salário do funcionário foi de R$%f para R$%f com o aumento de 10 porcento.\n", salarioAtual, salarioNovo);
    fflush(stdout);

    system("PAUSE");
    return 0;
}
