#include "ft_printf.h"

#include <limits.h>

int main()
{   
    int medida1;
    int medida2;
    int valor;

    valor = -14523;

    medida1 = ft_printf("|||%d%%%i|||\n", 1, 0);
    medida2 = printf("|||%d%%%i|||\n", 1, 0);
    if(medida1 != medida2)
        write(2, "KK\n", 3);
    else
        write(2, "OK\n", 3);
    printf("medida 1 -> %d\nmedida 2 -> %d\n", medida1, medida2);

    return 0;
}
