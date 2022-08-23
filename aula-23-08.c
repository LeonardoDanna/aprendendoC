#include <stdio.h>
#include <stdlib.h>

int main ()
{
    float ladoA, ladoB, ladoC;

    printf ("PROGRAMA PARA CLASSIFICAR TRIÂNGULOS\n\n");
    fflush (stdout);

    printf ("Digite em cm um dos lados: ");
    fflush (stdout);
    scanf  ("%f",&ladoA);
    fflush (stdin);

    if (ladoA<=0)
    {
        printf ("Medida invalida");
        fflush (stdout);
    }
    else
    {
        printf ("Digite em cm outro lado: ");
        fflush (stdout);
        scanf  ("%f",&ladoB);
        fflush (stdin);

        if (ladoB<=0)
        {
            printf ("Medida invalida");
            fflush (stdout);
        }
        else
        {
            printf ("Digite em cm o ultimo lado: ");
            fflush (stdout);
            scanf  ("%f",&ladoC);
            fflush (stdin);

            if (ladoC<=0)
            {
                printf ("Medida invalida");
                fflush (stdout);
            }
            else
            {
                if (ladoA+ladoB<=ladoC || ladoB+ladoC<=ladoA || ladoC+ladoA<=ladoB)
                {
                    printf ("Medidas nao formam triangulo");
                    fflush (stdout);
                }
                else
                {
                    if (ladoA==ladoB && ladoB==ladoC)
                    {
                        printf ("Trata-se de um triangulo equilatero");
                        fflush (stdout);
                    }
                    else
                    {
                        if (ladoA==ladoB || ladoB==ladoC || ladoC==ladoA)
                        {
                            printf ("Trata-se de um triangulo isosceles");
                            fflush (stdout);
                        }
                        else
                        {
                            printf ("Trata-se de um triangulo escaleno");
                            fflush (stdout);
                        }
                    }
                }
            }
        }
    }

    system("pause");
    return 0;
}
