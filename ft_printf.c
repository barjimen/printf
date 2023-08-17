/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barjimen <barjimen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 21:11:14 by barjimen          #+#    #+#             */
/*   Updated: 2023/08/17 20:36:37 by barjimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int ifs(va_list arg, char x)
{
    if(x == 'd')
        return(ft_putnbr(va_arg(arg, int)));
    else if (x == 'c')
        return(ft_putchar(va_arg(arg, int)));
    else if(x == 's')
        return(ft_putstr(va_arg(arg, char *)));
    else if(x == 'i')
        return(ft_putnbr(va_arg(arg, int)));
    else if(x == 'u')
        return(ft_putnbru(va_arg(arg,unsigned int)));
    else if((x == 'x') || (x == 'X'))
        return(ft_x_or_X(x, va_arg(arg, int)));
    else if(x == 'p')
        return(ft_point(va_arg(arg, void *)));
    else if(x == '%')
        return(ft_putchar('%'));
    
    return (0);
}


int ft_printf(char const *src, ...)
{   
    va_list arg;
    va_start(arg,src);
    int         size;
    size = 0;
    while (*src != '\0')
    {
        if(*src == '%')
        {
            size = ifs(arg, *(src + 1));  
            src ++;
        }
        else 
            ft_putchar((int )*src);
        src++;
    }
    va_end(arg);
    return (size);
}

/*int main(){
    ft_printf("Es %u y es %c , %s, el número es %% \n", -1, 'x', "Holi caracoli");
    printf("Es %u y es %c , %s, el número es , %i \n", -1, 'x', "Holi caracoli", 100);
    return 0;
}*/
