/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barjimen <barjimen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 21:11:14 by barjimen          #+#    #+#             */
/*   Updated: 2023/08/11 14:04:19 by barjimen         ###   ########.fr       */
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

int main(){
    ft_printf("Es %d y es %c , %s, el número es %% \n", 12, 'x', "Holi caracoli");
    printf("Es %d y es %c , %s, el número es %% \n", 12, 'x', "Holi caracoli");
    return 0;
}
