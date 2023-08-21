/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barjimen <barjimen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 17:36:49 by barjimen          #+#    #+#             */
/*   Updated: 2023/08/22 00:27:56 by barjimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	PRINTF_H
# define	PRINTF_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <stddef.h>
# include <string.h>
# include <limits.h>
# include <ctype.h>
# include <stdarg.h>

int     ft_putchar(int c);
int     ft_putnbr(int  nbr);
int     ft_printf(char const *src, ...);
int     ft_putstr(char *str);
int     ft_putnbru(unsigned long long nbr);
int     ft_strlen(char *str);
int     ft_hexa(long int nb, char * base);
int     ft_x_or_X(char x, unsigned long int nb);
int     ft_point(void *nb);
int     ft_hexa_p(long int nb, char * base);

#endif
