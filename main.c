#include <stdio.h>

int main ()
{
    char opcion;
    char cadena [25];
    int n;

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
            printf("Coloca una cadena de hasta veinticinco caracteres \n\n");
            fflush(stdin);
            fgets(cadena, sizeof(cadena), stdin);
            printf("Cololca el numero de veces que quieres que se imprima la cadena\n\n");
            scanf("%i", &n);
            mostrar(n, cadena);

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
    int promedio;
    int suma = 0;

    for (size_t i = 0; i < 5; i++)
    {
        scanf("%i", &enteros[i]);
    }
    for (size_t i = 0; i < 5; i++)
    {
        printf("%i \n\n", &enteros[i]);
    }
    for (size_t i = 0; i < 5; i++)
    {
        suma = suma + enteros[i];
    }

    printf("Suma: %i \n\n", suma);
    printf("Promedio: %i \n\n", suma/5);
    
}

void mostrar(int n, char cadena [])
{
    for (size_t i = 0; i < n; i++)
    {
        printf("%s \n\n", cadena);
    }
    
}

void personaje()
{

}