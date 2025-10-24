#include <stdio.h>

int main()
{
    int Yepez_Pinargote[100];
    int tamano;

    printf("Ingrese la altura del vector (1 - 100): ");
    scanf("%d", &tamano);

    if (tamano < 1 || tamano > 100)
    {
        printf("Error: La altura debe estar entre 1 y 100.\n");
        return 1;
    }

    printf("Ingrese los %d elementos del vector:\n", tamano);
    for (int i = 0; i < tamano; i++)
    {
        printf("Elemento [%d]: ", i + 1);
        scanf("%d", &Yepez_Pinargote[i]);
    }

    printf("\nContenido del vector Yepez_Pinargote:\n");
    for (int i = 0; i < tamano; i++)
    {
        printf("%d ", Yepez_Pinargote[i]);
    }

    printf("\n");
    return 0;
}
