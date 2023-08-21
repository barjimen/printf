#include "printf.h"

int main()
{   
    int medida1;
    int medida2;
    int valor;

    valor = -10;

    medida1 = ft_printf("Puntero: %x\n", valor);
    medida2 = printf("Puntero: %x\n", valor);

    printf("medida 1 -> %d\n medida 2 -> %d\n", medida1, medida2);
    //printf("El numero en hexa es: %lx\n", 140726129137140);
    return 0;
}
