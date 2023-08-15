#include "printf.h"

int main()
{
    int i = 2753;
    //ft_printf("Es %u y es %c , %s, el número es %% \n", -1, 'x', "Holi caracoli");
    printf("Integer -> %d\nHexa -> %x/%X\nPutero -> %p", i, i, i, i);
    return 0;
}
