#include "printf.h"

int main()
{   
    int medida1;
    int medida2;

    medida1 = ft_printf("-> %c\n", '*');
    medida2 = printf("-> %c\n",'*');
    
    printf("medida 1 -> %d\n medida 2 -> %d\n", medida1, medida2);
    return 0;
}
