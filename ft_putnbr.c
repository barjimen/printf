/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barjimen <barjimen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 16:10:26 by barjimen          #+#    #+#             */
/*   Updated: 2023/08/23 14:00:03 by barjimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int nbr)
{
	int	size;

	size = 0;
	if (nbr == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		size += 2;
		nbr = 147483648;
	}
	if (nbr < 0)
	{	
		ft_putchar('-');
		nbr *= -1;
		size++;
	}
	if (nbr < 10)
	{	
		ft_putchar(nbr + 48);
		size++;
		return (size);
	}
	else
		size += ft_putnbr(nbr / 10);
	ft_putnbr(nbr % 10);
	size++;
	return (size);
}
