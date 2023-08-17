#include "printf.h"

int main()
{
    void *a;
    a = 1024;
    ft_printf("Es %u, %s, %d, la prueba del hexa %x, point %p\n", -1, NULL, 10,2753,a);
    printf("%s, hexa es %x, point %p\n", NULL, 2753,a);
    return 0;
}
