#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void Yepez_Pinargote()
{
    int vector[100];
    int tamano;

    printf("Ingrese la altura del vector (1 - 100): ");
    scanf("%d", &tamano);

    if (tamano < 1 || tamano > 100)
    {
        printf("Error: La altura debe estar entre 1 y 100.\n");
        return;
    }

    srand(time(NULL));

    for (int i = 0; i < tamano; i++)
    {
        vector[i] = rand() % 100;
    }

    printf("\nResultado del vector Yepez_Pinargote:\n");
    for (int i = 0; i < tamano; i++)
    {
        printf("%d ", vector[i]);
    }

    printf("\n");
}

int main()
{

    Yepez_Pinargote();
    return 0;
}
