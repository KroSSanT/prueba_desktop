#include <stdio.h> //libreria printf scanf
#include <stdlib.h> //libreria funcion random

int main(void)
{
    char nombre;
    int intentos;
    int numero_random;
    int a;


    printf("Como te llamas?\n");
    //%d número base 10, %i enteros, %s string. Para recoger por pantalla se hace scanf
    scanf("%s", &nombre);
    printf("Hola %s, un placer conocerte", &nombre);

    numero_random = rand() % 11;
    intentos=0;

    while(1)
    {
        printf("Dime un numero de 0 a 10\n");
        scanf("%d", &a);
        intentos++;
        if (numero_random == a)
        {
            printf("%s Has acertado\n", &nombre);
            printf("Estaba pensando en el %d)", numero_random);
            printf("%s lo has logrado en %d intentos\n", &nombre, intentos);
            break;
        }
        else
        {
            printf("Sigue intentado\n");
        }
    }

    return(0);
}