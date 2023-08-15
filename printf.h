/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barjimen <barjimen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 17:36:49 by barjimen          #+#    #+#             */
/*   Updated: 2023/08/15 18:06:25 by barjimen         ###   ########.fr       */
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

#endif
