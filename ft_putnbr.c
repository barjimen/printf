/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barjimen <barjimen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 16:10:26 by barjimen          #+#    #+#             */
/*   Updated: 2023/08/18 18:36:32 by barjimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	count_digits(int nb)
{
	int	i;

	i = 0;
	if(nb < 0)
	{
		i++;
		nb *= -1;
	}
	if (nb >= 10)
	{
		count_digits(nb / 10);
		nb = nb % 10;
	}
	i++;
}

int	ft_putnbr(int nbr)
{
	if (nbr == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		nbr = 147483648;
	}
	if (nbr < 0)
	{	
		ft_putchar('-');
		nbr *= -1;
	}
	if (nbr < 10)
	{	
		ft_putchar(nbr + 48);
		return (count_digits(nbr));
	}
	else
		ft_putnbr(nbr / 10);
	ft_putnbr(nbr % 10);
	return (count_digits(nbr)); 	
