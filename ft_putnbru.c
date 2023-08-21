/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbru.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barjimen <barjimen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 16:10:26 by barjimen          #+#    #+#             */
/*   Updated: 2023/08/18 13:52:42 by barjimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"
//casteamos a unsigned y ademas lo gestionamos en base 10

int	count_digits_u(unsigned long long nb)
{
	static int	i;

	i = 0;

	if (nb >= 10)
	{
		count_digits_u(nb / 10);
		nb = nb % 10;
	}
	i++;
	return (i);
}

int	ft_putnbru(unsigned long long nbr)
{
	if (nbr < 10)
	{	
		ft_putchar(nbr + 48);
		return (count_digits_u(nbr));
	}
	else
		ft_putnbr(nbr / 10);
	ft_putnbr(nbr % 10);
	return (count_digits_u(nbr));
}	
