#include <stdio.h>

int main(void)
{
    char nombre;

    printf("¿Como te llamas?\n");
    //%d número base 10, %i enteros, %s string 
    // Recoger por pantalla se hace scanf
    scanf("%s", &nombre);
    printf("Hola %s, un placer conocerte", &nombre);

    return(0);
}