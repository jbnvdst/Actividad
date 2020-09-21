#include <stdio.h>

int main ()
{
    char opcion;

    do
    {
        printf("Elija una de las siguientes opciones: \n\n");
        printf("1.- Capturar entero \n\n 2.- Mostrar cadena \n\n 3. Personaje \n\n 0. Salir \n\n");
        scanf("%c", opcion);

        fflush (stdin);

        switch (opcion)
        {
        case '1':
            enteros();

            break;

        case '2':
            mostrar();

            break;

        case '3':
            personaje();

            break;

        default:
            break;
        }

    } while (opcion != '0');
    
}

void enteros()
{
    int enteros[5];

    for (size_t i = 0; i < sizeof(enteros); i++)
    {
        scanf("%i", &enteros[i]);
    }
    for (size_t i = 0; i < sizeof(enteros); i++)
    {
        printf("%i \n\n", &enteros[i]);
    }
    
}

void mostrar()
{
    int enteros[5];
    int promedio;
    int suma = 0;

    for (size_t i = 0; i < sizeof(enteros); i++)
    {
        scanf("%i", &enteros[i]);
    }
    for (size_t i = 0; i < sizeof(enteros); i++)
    {
        printf("%i \n\n", &enteros[i]);
    }
    for (size_t i = 0; i < sizeof(enteros); i++)
    {
        suma = suma + enteros[i];
    }

    printf("Suma: %i \n\n", suma);
    printf("Promedio: %i \n\n", suma/sizeof(enteros));
    
}

void personaje()
{

}