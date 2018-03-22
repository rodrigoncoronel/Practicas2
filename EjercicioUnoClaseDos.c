#include <stdio.h>
#include <stdlib.h>

#define CANTIDAD 3

int main()
{
    int numero;
    int acumulador;
    float promedio;
    int i;

    for(i = 0; i < CANTIDAD; i++)
    {
        do{
            printf("Ingrese un numero: ");
            scanf("%d", &numero);
        }while(numero <= 0);

        acumulador = acumulador + numero;


    }

    promedio = (float)acumulador / CANTIDAD;

    printf("El promedio es de: %.2f", promedio);

    return 0;
}
