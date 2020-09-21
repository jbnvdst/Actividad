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
            /* code */
            break;

        case '2':
            break;

        case '3':
            break;

        default:
            break;
        }

    } while (opcion != '0');
    
}

void enteros()
{
    int enteros[5];

    for (size_t i = 0; i < 5; i++)
    {
        scanf("%i", enteros);
    }
    
}