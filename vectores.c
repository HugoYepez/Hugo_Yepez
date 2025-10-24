#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int Yepez_Pinargote[100];
    int tamano;

    printf("Ingrese la altura  del vector (1 - 100): ");
    scanf("%d", &tamano);

    if (tamano < 1 || tamano > 100)
    {
        printf("Error: La altura debe estar entre 1 y 100.\n");
        return 1;
    }

    srand(time(NULL));
    for (int i = 0; i < tamano; i++)
    {
        Yepez_Pinargote[i] = rand() % 100;
    }

    printf("\n Resultado del vector:\n");
    for (int i = 0; i < tamano; i++)
    {
        printf("%d ", Yepez_Pinargote[i]);
    }

    printf("\n");
    return 0;
}
