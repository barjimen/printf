#include "printf.h"

int main()
{   
    int medida1;
    int medida2;

    medida1 = ft_printf("unsigned %u\n", -35);
    medida2 = printf("unsigned %u\n", -35);

    printf("medida 1 -> %d\n medida 2 -> %d\n", medida1, medida2);
    return 0;
}
